//Numpy array shape [10, 1]
//Min -4.062500000000
//Max 8.375000000000
//Number of zeros 8

#ifndef W12_H_
#define W12_H_

namespace hls4ml_toollip_v2 {

#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
weight12_t w12[10];
#else
weight12_t w12[10] = {0.00000, 0.00000, 0.00000, 0.00000, 0.00000, -4.06250, 8.37500, 0.00000, 0.00000, 0.00000};
#endif

} // namespace hls4ml_toollip_v2

#endif
