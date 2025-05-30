//Numpy array shape [10]
//Min -0.062500000000
//Max 0.437500000000
//Number of zeros 8

#ifndef B9_H_
#define B9_H_

namespace hls4ml_toollip_v1 {

#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias9_t b9[10];
#else
bias9_t b9[10] = {0.0000, 0.0000, 0.4375, 0.0000, -0.0625, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000};
#endif

} // namespace hls4ml_toollip_v1

#endif
