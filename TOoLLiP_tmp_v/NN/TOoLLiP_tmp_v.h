#ifndef TOOLLIP_TMP_V_H_
#define TOOLLIP_TMP_V_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "hls_stream.h"

#include "defines.h"

namespace hls4ml_model_emu_tmp_v {

// Prototype of top level function for C-synthesis
void TOoLLiP_tmp_v(
    input_t input_1[10*14],
    result_t layer13_out[1]
);

// hls-fpga-machine-learning insert emulator-defines

}

#endif
