//Numpy array shape [10]
//Min -0.250000000000
//Max 0.187500000000
//Number of zeros 7

#ifndef B16_H_
#define B16_H_

namespace hls4ml_toollip_v1 {

#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias16_t b16[10];
#else
bias16_t b16[10] = {0.0000, -0.2500, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000, 0.1875, -0.0625};
#endif

} // namespace hls4ml_toollip_v1

#endif
