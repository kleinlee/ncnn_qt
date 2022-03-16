#include "mainwindow.h"

#include <vector>
#include <QImage>
#include <QDebug>

static int print_topk(const std::vector<float>& cls_scores, int topk)
{
    // partial sort topk with index
    int size = cls_scores.size();
    std::vector<std::pair<float, int> > vec;
    vec.resize(size);
    for (int i = 0; i < size; i++)
    {
        vec[i] = std::make_pair(cls_scores[i], i);
    }

    std::partial_sort(vec.begin(), vec.begin() + topk, vec.end(),
                      std::greater<std::pair<float, int> >());

    // print topk and score
    for (int i = 0; i < topk; i++)
    {
        float score = vec[i].first;
        int index = vec[i].second;
        qDebug() << "OOOOOOOOOOO   " << index << score;
    }

    return 0;
}

#include <QFile>
MainWindow::MainWindow(QWidget *parent)
{
    QFile dataFile(":/squeezenet_v1.1.param");
    dataFile.open(QIODevice::ReadOnly);
    QByteArray ba = dataFile.readAll();
    dataFile.close();
    QFile dataFile2(":/squeezenet_v1.1.bin");
    dataFile2.open(QIODevice::ReadOnly);
    QByteArray ba2 = dataFile2.readAll();
    dataFile.close();

    unsigned char* data_model = (unsigned char*) ba2.data();

    squeezenet = new ncnn::Net();

    squeezenet->load_param_mem(ba.data());
    squeezenet->load_model(data_model);

    QImage image = QImage(":/timg2.jpg");
    qDebug() << image.width() << image.height();

    QLabel* qLabel = new QLabel(this);
    qLabel->setPixmap(QPixmap::fromImage(image));
    qLabel->show();

    ncnn::Mat in = ncnn::Mat::from_pixels_resize(image.bits(), ncnn::Mat::PIXEL_RGBA2RGB, image.width(), image.height(), 227, 227);
//    ncnn::Mat in = ncnn::Mat::from_pixels_resize(image.bits(), ncnn::Mat::PIXEL_RGBA2BGR, image.width(), image.height(), 224, 224);

    const float mean_vals[3] = {104.f, 117.f, 123.f};
    in.substract_mean_normalize(mean_vals, 0);

    ncnn::Extractor ex = squeezenet->create_extractor();

    ex.set_light_mode(true);
    ex.set_num_threads(4);
    ex.input("data", in);

    qDebug() << "in.total  " << in.total();

    ncnn::Mat out;

    for (int j = 0; j < 100; j++)
    {
        ex.extract(j,out);
//        qDebug() << "QQQQQQQQQQ" << j << out[j];
    }
    ex.extract("prob", out);

    std::vector<float> cls_scores;
    cls_scores.resize(out.w);
    for (int j = 0; j < out.w; j++)
    {
        cls_scores[j] = out[j];
//        qDebug() << cls_scores[j];
    }

    print_topk(cls_scores, 5);
}

MainWindow::~MainWindow()
{
    if (squeezenet != nullptr)
    {
        delete squeezenet;
        squeezenet = nullptr;
    }
}

