//Numpy array shape [10]
//Min 0.000000000000
//Max 0.062500000000
//Number of zeros 9

#ifndef B15_H_
#define B15_H_

#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
bias15_t b15[10];
#else
bias15_t b15[10] = {0.0000, 0.0000, 0.0000, 0.0000, 0.0625, 0.0000, 0.0000, 0.0000, 0.0000, 0.0000};
#endif

#endif
