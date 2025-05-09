//Numpy array shape [10]
//Min -0.281250000000
//Max 0.218750000000
//Number of zeros 5

#ifndef B15_H_
#define B15_H_

namespace hls4ml_toollip_v2 {

#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias15_t b15[10];
#else
bias15_t b15[10] = {0.00000, 0.00000, -0.28125, 0.03125, 0.00000, 0.00000, 0.00000, -0.15625, -0.06250, 0.21875};
#endif

} // namespace hls4ml_toollip_v2

#endif
