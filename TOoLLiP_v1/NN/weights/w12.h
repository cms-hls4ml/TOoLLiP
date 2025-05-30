//Numpy array shape [10, 1]
//Min -3.562500000000
//Max 5.750000000000
//Number of zeros 8

#ifndef W12_H_
#define W12_H_

namespace hls4ml_toollip_v1 {

#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
weight12_t w12[10];
#else
weight12_t w12[10] = {0.0000, 0.0000, 5.7500, 0.0000, -3.5625, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000};
#endif

} // namespace hls4ml_toollip_v1

#endif
