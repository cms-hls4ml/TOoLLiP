#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

namespace hls4ml_toollip_v2 {

// hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 10
#define N_INPUT_2_1 14
#define N_OUTPUTS_15 10
#define N_FILT_15 10
#define N_OUTPUTS_2 10
#define N_FILT_2 10
#define N_OUTPUTS_16 10
#define N_FILT_16 10
#define N_OUTPUTS_5 10
#define N_FILT_5 10
#define N_FILT_8 10
#define N_LAYER_9 10
#define N_LAYER_12 1

// hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<16,6> input_t;
typedef ap_fixed<16,6> q_conv1d_default_t;
typedef ap_fixed<16,6> layer15_t;
typedef ap_fixed<10,5> weight15_t;
typedef ap_fixed<10,5> bias15_t;
typedef ap_fixed<16,6> layer4_t;
typedef ap_fixed<18,8> q_activation_table_t;
typedef ap_fixed<16,6> q_conv1d_1_default_t;
typedef ap_fixed<16,6> layer16_t;
typedef ap_fixed<10,5> weight16_t;
typedef ap_fixed<10,5> bias16_t;
typedef ap_fixed<16,6> layer7_t;
typedef ap_fixed<18,8> q_activation_1_table_t;
typedef ap_fixed<16,9> model_default_t;
typedef ap_fixed<16,6> layer8_t;
typedef ap_fixed<16,6> layer9_t;
typedef ap_fixed<10,5> weight9_t;
typedef ap_fixed<10,5> bias9_t;
typedef ap_uint<1> layer9_index;
typedef ap_fixed<16,6> layer11_t;
typedef ap_fixed<18,8> q_activation_2_table_t;
typedef ap_fixed<16,6> layer12_t;
typedef ap_fixed<10,5> weight12_t;
typedef ap_fixed<10,5> bias12_t;
typedef ap_uint<1> layer12_index;
typedef ap_fixed<16,6> result_t;
typedef ap_fixed<18,8> sigmoid_table_t;

} // namespace hls4ml_toollip_v2

#endif
