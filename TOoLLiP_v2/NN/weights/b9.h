//Numpy array shape [10]
//Min 0.000000000000
//Max 1.375000000000
//Number of zeros 8

#ifndef B9_H_
#define B9_H_

namespace hls4ml_toollip_v2 {

#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias9_t b9[10];
#else
bias9_t b9[10] = {0.00000, 0.00000, 0.00000, 0.00000, 0.00000, 1.37500, 1.00000, 0.00000, 0.00000, 0.00000};
#endif

} // namespace hls4ml_toollip_v2

#endif
