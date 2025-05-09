#ifndef TOOLLIP_V2_H_
#define TOOLLIP_V2_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "hls_stream.h"

#include "defines.h"

namespace hls4ml_toollip_v2 {

// Prototype of top level function for C-synthesis
void TOoLLiP_v2(
    input_t input_1[N_INPUT_1_1*N_INPUT_2_1],
    result_t layer14_out[N_LAYER_12]
);

} // namespace hls4ml_toollip_v2

#endif
