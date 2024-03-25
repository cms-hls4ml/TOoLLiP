//Numpy array shape [1]
//Min 0.000000000000
//Max 0.000000000000
//Number of zeros 1

#ifndef B12_H_
#define B12_H_

namespace hls4ml_toollip_v1 {

#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias12_t b12[1];
#else
bias12_t b12[1] = {0.0000};
#endif

} // namespace hls4ml_toollip_v1

#endif
