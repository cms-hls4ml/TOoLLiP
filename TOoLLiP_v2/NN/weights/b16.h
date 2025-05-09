//Numpy array shape [10]
//Min -1.125000000000
//Max 0.593750000000
//Number of zeros 6

#ifndef B16_H_
#define B16_H_

namespace hls4ml_toollip_v2 {

#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias16_t b16[10];
#else
bias16_t b16[10] = {-0.09375, -1.12500, 0.59375, 0.00000, -1.12500, 0.00000, 0.00000, 0.00000, 0.00000, 0.00000};
#endif

} // namespace hls4ml_toollip_v2

#endif
