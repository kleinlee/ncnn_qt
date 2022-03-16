QT += core gui widgets

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h 
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ai.qrc

win32 {
INCLUDEPATH += $$PWD/x64/include
LIBS += -L$$PWD/x64/lib/ -lncnn
DLLDESTDIR
}
contains(ANDROID_TARGET_ARCH,arm64-v8a)  {
INCLUDEPATH += $$PWD/arm64-v8a/include
LIBS += -L$$PWD/arm64-v8a/lib/ -lncnn
ANDROID_EXTRA_LIBS = $$PWD/arm64-v8a/lib/libncnn.so
}
mac: {
LIBS += -F$$PWD/./ -framework ncnn
INCLUDEPATH += $$PWD/ncnn.framework/Versions/A/Headers
DEPENDPATH += $$PWD/ncnn.framework/Versions/A/Headers
LIBS += -F$$PWD/./ -framework openmp
INCLUDEPATH += $$PWD/openmp.framework/Versions/A/Headers
DEPENDPATH += $$PWD/openmp.framework/Versions/A/Headers
}
