// Layer Shader Enum header
//
// This file is auto-generated by cmake, don't edit it.

absval = 0,
absval_pack4 = 1,
absval_pack8 = 2,
batchnorm = 3,
batchnorm_pack4 = 4,
batchnorm_pack8 = 5,
concat = 6,
concat_pack4 = 7,
concat_pack4to1 = 8,
concat_pack8 = 9,
concat_pack8to1 = 10,
concat_pack8to4 = 11,
convolution = 12,
convolution_1x1s1d1 = 13,
convolution_pack1to4 = 14,
convolution_pack1to8 = 15,
convolution_pack4 = 16,
convolution_pack4_1x1s1d1 = 17,
convolution_pack4_3x3s1d1_winograd23_gemm = 18,
convolution_pack4_3x3s1d1_winograd23_transform_input = 19,
convolution_pack4_3x3s1d1_winograd23_transform_output = 20,
convolution_pack4to1 = 21,
convolution_pack4to8 = 22,
convolution_pack8 = 23,
convolution_pack8_1x1s1d1 = 24,
convolution_pack8_3x3s1d1_winograd23_gemm = 25,
convolution_pack8_3x3s1d1_winograd23_transform_input = 26,
convolution_pack8_3x3s1d1_winograd23_transform_output = 27,
convolution_pack8to1 = 28,
convolution_pack8to4 = 29,
crop = 30,
crop_pack1to4 = 31,
crop_pack1to8 = 32,
crop_pack4 = 33,
crop_pack4to1 = 34,
crop_pack4to8 = 35,
crop_pack8 = 36,
crop_pack8to1 = 37,
crop_pack8to4 = 38,
deconvolution = 39,
deconvolution_pack1to4 = 40,
deconvolution_pack1to8 = 41,
deconvolution_pack4 = 42,
deconvolution_pack4to1 = 43,
deconvolution_pack4to8 = 44,
deconvolution_pack8 = 45,
deconvolution_pack8to1 = 46,
deconvolution_pack8to4 = 47,
dropout = 48,
dropout_pack4 = 49,
dropout_pack8 = 50,
eltwise = 51,
eltwise_pack4 = 52,
eltwise_pack8 = 53,
flatten = 54,
flatten_pack1to4 = 55,
flatten_pack1to8 = 56,
flatten_pack4 = 57,
flatten_pack4to8 = 58,
flatten_pack8 = 59,
innerproduct = 60,
innerproduct_gemm = 61,
innerproduct_gemm_wp1to4 = 62,
innerproduct_gemm_wp1to8 = 63,
innerproduct_gemm_wp4 = 64,
innerproduct_gemm_wp4to1 = 65,
innerproduct_gemm_wp4to8 = 66,
innerproduct_gemm_wp8 = 67,
innerproduct_gemm_wp8to1 = 68,
innerproduct_gemm_wp8to4 = 69,
innerproduct_pack1to4 = 70,
innerproduct_pack1to8 = 71,
innerproduct_pack4 = 72,
innerproduct_pack4to1 = 73,
innerproduct_pack4to8 = 74,
innerproduct_pack8 = 75,
innerproduct_pack8to1 = 76,
innerproduct_pack8to4 = 77,
lrn_norm = 78,
lrn_norm_across_channel_pack4 = 79,
lrn_norm_across_channel_pack8 = 80,
lrn_norm_within_channel_pack4 = 81,
lrn_norm_within_channel_pack8 = 82,
lrn_square_pad = 83,
lrn_square_pad_across_channel_pack4 = 84,
lrn_square_pad_across_channel_pack8 = 85,
lrn_square_pad_within_channel_pack4 = 86,
lrn_square_pad_within_channel_pack8 = 87,
pooling = 88,
pooling_global = 89,
pooling_global_pack4 = 90,
pooling_global_pack8 = 91,
pooling_pack4 = 92,
pooling_pack8 = 93,
prelu = 94,
prelu_pack4 = 95,
prelu_pack8 = 96,
relu = 97,
relu_pack4 = 98,
relu_pack8 = 99,
reshape = 100,
reshape_pack1to4 = 101,
reshape_pack1to8 = 102,
reshape_pack4 = 103,
reshape_pack4to1 = 104,
reshape_pack4to8 = 105,
reshape_pack8 = 106,
reshape_pack8to1 = 107,
reshape_pack8to4 = 108,
scale = 109,
scale_pack4 = 110,
scale_pack8 = 111,
sigmoid = 112,
sigmoid_pack4 = 113,
sigmoid_pack8 = 114,
slice = 115,
slice_pack1to4 = 116,
slice_pack1to8 = 117,
slice_pack4 = 118,
slice_pack4to8 = 119,
slice_pack8 = 120,
softmax_div_sum = 121,
softmax_div_sum_pack4 = 122,
softmax_div_sum_pack8 = 123,
softmax_exp_sub_max = 124,
softmax_exp_sub_max_pack4 = 125,
softmax_exp_sub_max_pack8 = 126,
softmax_reduce_max = 127,
softmax_reduce_max_pack4 = 128,
softmax_reduce_max_pack8 = 129,
softmax_reduce_sum = 130,
softmax_reduce_sum_pack4 = 131,
softmax_reduce_sum_pack8 = 132,
tanh = 133,
tanh_pack4 = 134,
tanh_pack8 = 135,
binaryop = 136,
binaryop_broadcast = 137,
binaryop_broadcast_a1_pack4 = 138,
binaryop_broadcast_a1_pack8 = 139,
binaryop_broadcast_b1_pack4 = 140,
binaryop_broadcast_b1_pack8 = 141,
binaryop_broadcast_pack4 = 142,
binaryop_broadcast_pack8 = 143,
binaryop_pack4 = 144,
binaryop_pack8 = 145,
unaryop = 146,
unaryop_pack4 = 147,
unaryop_pack8 = 148,
convolutiondepthwise = 149,
convolutiondepthwise_group = 150,
convolutiondepthwise_group_pack1to4 = 151,
convolutiondepthwise_group_pack1to8 = 152,
convolutiondepthwise_group_pack4 = 153,
convolutiondepthwise_group_pack4to1 = 154,
convolutiondepthwise_group_pack4to8 = 155,
convolutiondepthwise_group_pack8 = 156,
convolutiondepthwise_group_pack8to1 = 157,
convolutiondepthwise_group_pack8to4 = 158,
convolutiondepthwise_pack4 = 159,
convolutiondepthwise_pack8 = 160,
padding = 161,
padding_pack1to4 = 162,
padding_pack1to8 = 163,
padding_pack4 = 164,
padding_pack4to1 = 165,
padding_pack4to8 = 166,
padding_pack8 = 167,
padding_pack8to1 = 168,
padding_pack8to4 = 169,
normalize_coeffs = 170,
normalize_coeffs_pack4 = 171,
normalize_coeffs_pack8 = 172,
normalize_norm = 173,
normalize_norm_pack4 = 174,
normalize_norm_pack8 = 175,
normalize_reduce_sum4_fp16_to_fp32 = 176,
normalize_reduce_sum4_fp16_to_fp32_pack4 = 177,
normalize_reduce_sum4_fp16_to_fp32_pack8 = 178,
normalize_reduce_sum4_fp32 = 179,
normalize_reduce_sum4_fp32_pack4 = 180,
normalize_reduce_sum4_fp32_pack8 = 181,
permute = 182,
permute_pack1to4 = 183,
permute_pack1to8 = 184,
permute_pack4 = 185,
permute_pack4to1 = 186,
permute_pack4to8 = 187,
permute_pack8 = 188,
permute_pack8to1 = 189,
permute_pack8to4 = 190,
priorbox = 191,
priorbox_mxnet = 192,
interp = 193,
interp_bicubic = 194,
interp_bicubic_coeffs = 195,
interp_bicubic_pack4 = 196,
interp_bicubic_pack8 = 197,
interp_pack4 = 198,
interp_pack8 = 199,
deconvolutiondepthwise = 200,
deconvolutiondepthwise_group = 201,
deconvolutiondepthwise_group_pack1to4 = 202,
deconvolutiondepthwise_group_pack1to8 = 203,
deconvolutiondepthwise_group_pack4 = 204,
deconvolutiondepthwise_group_pack4to1 = 205,
deconvolutiondepthwise_group_pack4to8 = 206,
deconvolutiondepthwise_group_pack8 = 207,
deconvolutiondepthwise_group_pack8to1 = 208,
deconvolutiondepthwise_group_pack8to4 = 209,
deconvolutiondepthwise_pack4 = 210,
deconvolutiondepthwise_pack8 = 211,
shufflechannel = 212,
shufflechannel_pack4 = 213,
shufflechannel_pack8 = 214,
instancenorm_coeffs = 215,
instancenorm_coeffs_pack4 = 216,
instancenorm_coeffs_pack8 = 217,
instancenorm_norm = 218,
instancenorm_norm_pack4 = 219,
instancenorm_norm_pack8 = 220,
instancenorm_reduce_mean = 221,
instancenorm_reduce_mean_pack4 = 222,
instancenorm_reduce_mean_pack8 = 223,
instancenorm_reduce_sum4_fp16_to_fp32 = 224,
instancenorm_reduce_sum4_fp16_to_fp32_pack4 = 225,
instancenorm_reduce_sum4_fp16_to_fp32_pack8 = 226,
instancenorm_reduce_sum4_fp32 = 227,
instancenorm_reduce_sum4_fp32_pack4 = 228,
instancenorm_reduce_sum4_fp32_pack8 = 229,
instancenorm_sub_mean_square = 230,
instancenorm_sub_mean_square_pack4 = 231,
instancenorm_sub_mean_square_pack8 = 232,
clip = 233,
clip_pack4 = 234,
clip_pack8 = 235,
reorg = 236,
reorg_pack1to4 = 237,
reorg_pack1to8 = 238,
reorg_pack4 = 239,
reorg_pack4to8 = 240,
reorg_pack8 = 241,
packing = 242,
packing_fp16_to_fp32 = 243,
packing_fp32_to_fp16 = 244,
packing_pack1to4 = 245,
packing_pack1to4_fp16_to_fp32 = 246,
packing_pack1to4_fp32_to_fp16 = 247,
packing_pack1to8 = 248,
packing_pack1to8_fp16_to_fp32 = 249,
packing_pack1to8_fp32_to_fp16 = 250,
packing_pack4 = 251,
packing_pack4_fp16_to_fp32 = 252,
packing_pack4_fp32_to_fp16 = 253,
packing_pack4to1 = 254,
packing_pack4to1_fp16_to_fp32 = 255,
packing_pack4to1_fp32_to_fp16 = 256,
packing_pack4to8 = 257,
packing_pack4to8_fp16_to_fp32 = 258,
packing_pack4to8_fp32_to_fp16 = 259,
packing_pack8 = 260,
packing_pack8_fp16_to_fp32 = 261,
packing_pack8_fp32_to_fp16 = 262,
packing_pack8to1 = 263,
packing_pack8to1_fp16_to_fp32 = 264,
packing_pack8to1_fp32_to_fp16 = 265,
packing_pack8to4 = 266,
packing_pack8to4_fp16_to_fp32 = 267,
packing_pack8to4_fp32_to_fp16 = 268,
cast_fp16_to_fp32 = 269,
cast_fp16_to_fp32_pack4 = 270,
cast_fp16_to_fp32_pack8 = 271,
cast_fp32_to_fp16 = 272,
cast_fp32_to_fp16_pack4 = 273,
cast_fp32_to_fp16_pack8 = 274,
hardsigmoid = 275,
hardsigmoid_pack4 = 276,
hardsigmoid_pack8 = 277,
hardswish = 278,
hardswish_pack4 = 279,
hardswish_pack8 = 280,
pixelshuffle = 281,
pixelshuffle_pack4 = 282,
pixelshuffle_pack4to1 = 283,
pixelshuffle_pack8 = 284,
pixelshuffle_pack8to1 = 285,
pixelshuffle_pack8to4 = 286,
deepcopy = 287,
deepcopy_pack4 = 288,
deepcopy_pack8 = 289,
mish = 290,
mish_pack4 = 291,
mish_pack8 = 292,
swish = 293,
swish_pack4 = 294,
swish_pack8 = 295,
convert_ycbcr = 296,

