//Numpy array shape [1]
//Min 0.218750000000
//Max 0.218750000000
//Number of zeros 0

#ifndef B13_H_
#define B13_H_

namespace hls4ml_toollip_v1 {

#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias13_t b13[1];
#else
bias13_t b13[1] = {0.2187500};
#endif

} // namespace hls4ml_toollip_v1

#endif
