//Numpy array shape [1]
//Min 0.281250000000
//Max 0.281250000000
//Number of zeros 0

#ifndef B12_H_
#define B12_H_

namespace hls4ml_toollip_v2 {

#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias12_t b12[1];
#else
bias12_t b12[1] = {0.28125};
#endif

} // namespace hls4ml_toollip_v2

#endif
