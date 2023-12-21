//Numpy array shape [1, 50, 50]
//Min -1.000000000000
//Max 0.992187500000
//Number of zeros 1875

#ifndef W18_H_
#define W18_H_

#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__
weight18_t w18[2500];
#else
weight18_t w18[2500] = {0.0000000, -0.3906250, -0.4218750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.4140625, 0.0000000, 0.0000000, 0.3359375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.4062500, 0.0000000, -0.9765625, -0.3984375, 0.0000000, -0.3515625, 0.0000000, 0.0000000, 0.0000000, 0.3437500, 0.0000000, 0.0000000, 0.0000000, 0.9843750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.0859375, 0.0000000, 0.1484375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -1.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.2187500, 0.0000000, 0.0546875, 0.1640625, -0.3203125, 0.0000000, -0.3593750, 0.0000000, -0.4140625, 0.0000000, 0.0000000, 0.0000000, -0.5000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0625000, 0.0000000, 0.0000000, 0.0000000, -0.7109375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0234375, 0.0000000, 0.0000000, 0.0000000, -0.5000000, 0.2031250, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.4531250, 0.0000000, 0.0781250, 0.0000000, 0.0000000, 0.0000000, -0.1250000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.3203125, 0.0000000, 0.1171875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.9921875, 0.0000000, 0.0000000, 0.1484375, 0.0000000, 0.0000000, -0.0625000, -0.4296875, 0.0000000, 0.0000000, 0.0000000, 0.6406250, 0.0781250, 0.0000000, 0.2421875, 0.0000000, 0.0000000, 0.0703125, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.4062500, 0.0000000, 0.0000000, 0.0000000, 0.5937500, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.3750000, 0.0000000, 0.0000000, 0.5703125, -0.3203125, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.5156250, 0.0000000, 0.4531250, -0.2656250, 0.0000000, 0.0000000, 0.1328125, 0.7265625, 0.0000000, 0.0000000, 0.3203125, -0.1093750, -0.1718750, 0.0000000, 0.0000000, 0.0000000, 0.4921875, 0.0000000, 0.1562500, 0.2734375, 0.0000000, 0.0000000, 0.0000000, 0.6328125, 0.0703125, 0.0000000, 0.0937500, 0.5546875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.4375000, 0.0000000, 0.0000000, 0.0000000, 0.9843750, 0.0000000, 0.0000000, 0.1718750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.1328125, 0.1640625, -0.3906250, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.2500000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.9218750, 0.1875000, 0.0000000, 0.0000000, -0.4375000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.6093750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.4609375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.5000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.0234375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.1093750, -0.1171875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.4062500, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.1484375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0625000, 0.0000000, -0.2265625, 0.1953125, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.3906250, 0.0000000, -0.3984375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.9765625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.7812500, -0.2734375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.9921875, -0.3203125, 0.0000000, 0.0000000, -0.9765625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.9765625, 0.0000000, -0.2187500, 0.0000000, -0.4062500, -0.3593750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -1.0000000, 0.1953125, 0.0000000, 0.0000000, 0.0000000, 0.6171875, 0.0000000, 0.0000000, -0.4843750, 0.0000000, -0.0781250, 0.0000000, 0.3359375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.8828125, -1.0000000, 0.1718750, -0.8750000, 0.0000000, 0.0000000, 0.0000000, -0.9921875, -0.4296875, 0.3515625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.9765625, 0.0000000, 0.9843750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.3828125, 0.0000000, -0.8671875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.9843750, -1.0000000, 0.1718750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.9921875, 0.1640625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.9140625, 0.0000000, 0.1796875, 0.0000000, -0.9765625, 0.0000000, 0.3359375, 0.0000000, 0.0000000, 0.9453125, -0.9765625, 0.0000000, 0.3046875, 0.3984375, 0.0000000, -0.2890625, 0.0000000, 0.0000000, 0.0000000, -0.9921875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.9765625, -0.9921875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.9921875, 0.2421875, 0.0000000, -0.4375000, -0.9843750, 0.0000000, -0.3437500, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.3203125, 0.0000000, -0.4453125, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -1.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.9921875, 0.0000000, 0.0000000, 0.2187500, -0.4062500, 0.0000000, 0.0000000, 0.2031250, 0.0078125, 0.0000000, 0.0000000, 0.3593750, 0.0000000, 0.0000000, -0.4062500, 0.0000000, 0.0000000, -1.0000000, 0.0000000, -0.9765625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.4921875, 0.0000000, 0.0000000, 0.9765625, 0.0546875, 0.0000000, -0.6796875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.3515625, 0.0000000, 0.0000000, 0.2734375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.3359375, 0.2812500, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.2968750, 0.3203125, -0.4375000, 0.0000000, 0.3281250, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.3437500, 0.0000000, -0.4531250, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.5703125, 0.0000000, 0.1328125, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.4218750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.3437500, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.5078125, 0.4453125, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.4218750, 0.0000000, 0.0000000, -0.2968750, 0.0000000, 0.0000000, 0.2031250, 0.0000000, 0.0000000, -0.9921875, 0.0000000, 0.0000000, 0.2890625, -0.9921875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.2578125, 0.2187500, 0.0000000, -0.1171875, 0.0000000, -1.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.3593750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.3359375, 0.0000000, 0.0000000, 0.0000000, 0.9921875, 0.0000000, 0.0000000, 0.0000000, 0.9921875, -0.0390625, 0.0000000, 0.0000000, 0.4531250, -0.6953125, 0.0000000, 0.2187500, 0.1953125, 0.0000000, 0.1328125, 0.0000000, 0.0000000, 0.9921875, 0.0000000, -0.4921875, 0.3125000, 0.0000000, -0.9921875, -0.2734375, -0.4453125, 0.0000000, 0.0000000, 0.2968750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.6406250, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.1015625, 0.0000000, 0.0000000, 0.0000000, 0.1640625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.1718750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.2343750, 0.2343750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.2031250, 0.0000000, 0.0000000, 0.0000000, 0.1953125, -0.0937500, -0.2968750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.7343750, 0.0468750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.5078125, 0.0000000, -0.2265625, 0.0000000, 0.0000000, -0.5703125, 0.0000000, -0.9765625, 0.0000000, 0.0000000, -0.3828125, 0.9921875, 0.0000000, 0.5156250, -0.7343750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -1.0000000, 0.0000000, -0.5937500, -0.5703125, -1.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.7968750, 0.2343750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.5390625, 0.9921875, 0.0000000, -1.0000000, 0.0000000, 0.0000000, -0.6171875, 0.0000000, 0.0937500, 0.9765625, 0.0000000, 0.0000000, 0.0000000, -0.3984375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.9531250, 0.0000000, 0.0000000, -0.4218750, -0.1718750, 0.0000000, 0.3437500, -0.3984375, 0.0000000, -1.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.3593750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.9921875, -0.9140625, -1.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.2343750, -0.0234375, 0.0390625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.9687500, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.3437500, 0.0000000, 0.0000000, 0.0000000, 0.5000000, -0.3125000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.5781250, 0.0000000, 0.0000000, 0.0000000, 0.0703125, 0.0000000, 0.0000000, -0.3828125, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.8203125, 0.0000000, 0.0000000, 0.3828125, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.1171875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.9921875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.1406250, -0.3984375, 0.0000000, 0.0000000, -0.8046875, 0.0000000, -0.3281250, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.5781250, 0.0000000, 0.3437500, 0.0000000, -0.5078125, 0.3203125, 0.0000000, 0.9843750, -1.0000000, -0.9921875, 0.0000000, 0.0000000, 0.0000000, -0.9921875, 0.0000000, 0.8046875, 0.0000000, -0.6953125, 0.0000000, 0.0000000, 0.3203125, 0.0000000, -0.6953125, -0.4375000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.1406250, 0.0000000, 0.0000000, 0.0000000, -0.4375000, 0.0000000, -0.4062500, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.9140625, 0.0000000, -0.6796875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.9921875, 0.0000000, -0.4062500, 0.0000000, 0.0000000, -0.5625000, 0.0000000, 0.0703125, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.0781250, 0.0000000, 0.0000000, 0.0000000, -1.0000000, 0.4218750, 0.0000000, 0.0000000, -1.0000000, 0.0000000, 0.0000000, 0.0000000, -0.9609375, 0.2968750, 0.0000000, 0.0000000, -0.5078125, 0.2656250, -1.0000000, 0.1015625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.1718750, -0.8046875, 0.0000000, -0.9453125, 0.0000000, 0.0000000, 0.2890625, 0.0000000, 0.8046875, -0.2500000, 0.0000000, 0.0000000, -0.9296875, -0.4609375, 0.0000000, 0.4531250, -1.0000000, 0.0000000, -0.5390625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.9843750, 0.0000000, -1.0000000, 0.0000000, 0.0000000, 0.9921875, 0.0000000, 0.0000000, 0.0000000, -1.0000000, 0.0000000, 0.0000000, -0.3281250, -1.0000000, 0.0000000, 0.0000000, 0.2500000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.2421875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.9843750, 0.0000000, 0.9921875, 0.0000000, 0.0000000, 0.0000000, 0.9609375, 0.0000000, 0.0000000, -0.5234375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.9375000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.7656250, 0.0000000, 0.9687500, 0.1562500, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.1953125, 0.0000000, -0.5156250, 0.0000000, 0.0000000, -0.0625000, 0.0000000, -0.4218750, 0.0000000, 0.1406250, 0.0000000, 0.0000000, -0.2265625, 0.0312500, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.2265625, 0.4140625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.9843750, 0.0000000, 0.0000000, -0.5390625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.7187500, 0.0000000, 0.0000000, -0.7968750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.3359375, 0.0000000, 0.4531250, -0.9765625, 0.0000000, 0.9765625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.2734375, 0.0000000, 0.0000000, 0.0000000, -0.5625000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.0468750, 0.0000000, 0.0000000, -0.3046875, 0.0000000, 0.0000000, 0.4296875, 0.0000000, 0.0000000, 0.2421875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.4140625, 0.0000000, 0.0000000, 0.0000000, 0.5234375, 0.0000000, 0.0000000, 0.0000000, 0.2500000, -0.0546875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.1484375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.9843750, -0.3750000, 0.0000000, 0.0000000, 0.0312500, -0.3125000, 0.0000000, 0.2734375, 0.0000000, 0.0000000, 0.3046875, 0.0000000, 0.5000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.0312500, 0.0000000, 0.0000000, -0.4453125, 0.1718750, 0.0000000, 0.4062500, 0.0781250, 0.1328125, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.1484375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.1718750, 0.0000000, 0.0000000, 0.0000000, -0.9687500, -0.2968750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.7656250, 0.0000000, -0.6171875, -0.1093750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0390625, 0.0000000, 0.0000000, -0.4062500, 0.0000000, 0.0000000, 0.0000000, -0.7890625, -0.9921875, 0.0000000, 0.6093750, 0.0000000, 0.0000000, 0.1953125, 0.0000000, 0.0000000, -0.7109375, 0.0000000, 0.0000000, 0.2187500, 0.0000000, -0.7109375, 0.0000000, 0.0000000, -0.7343750, 0.0000000, -0.5156250, 0.0000000, -0.9375000, 0.0000000, 0.0000000, 0.0000000, 0.3593750, -0.3671875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.4531250, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.2890625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.1250000, 0.0000000, -0.0703125, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.5000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0546875, -0.2578125, -0.3593750, 0.0000000, 0.0000000, 0.0000000, -0.4375000, 0.0000000, 0.4140625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.2890625, 0.0000000, -0.5000000, 0.0000000, -0.9921875, 0.0000000, -0.2968750, 0.0390625, 0.0000000, 0.0000000, -0.6718750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.9921875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.7578125, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.2578125, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.2968750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.9218750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.5000000, 0.0234375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.2890625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.8125000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.3437500, -0.1875000, 0.0000000, 0.0000000, -0.9921875, 0.4531250, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.2343750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.4140625, 0.0156250, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.3515625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.9765625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.2343750, 0.0000000, 0.3046875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.9843750, 0.0000000, 0.0000000, -0.6093750, 0.0000000, 0.0000000, 0.0000000, 0.2812500, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -1.0000000, 0.3125000, 0.9531250, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0312500, -1.0000000, 0.0000000, 0.9687500, 0.0000000, 0.2265625, 0.0000000, 0.0390625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.6875000, 0.0000000, 0.2734375, -0.3046875, 0.0000000, 0.2812500, -0.7812500, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.2421875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.6406250, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.2109375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0625000, 0.7656250, 0.0000000, 0.1328125, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.6406250, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.4375000, 0.0000000, 0.0000000, -0.3828125, 0.0000000, 0.0000000, 0.0000000, 0.3203125, 0.0000000, 0.0000000, 0.0000000, -0.3671875, 0.0000000, 0.0000000, 0.0000000, 0.1640625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.2812500, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.3828125, 0.0000000, 0.0000000, -0.2656250, 0.7109375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.3984375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.2968750, 0.0000000, 0.9921875, -0.9140625, 0.0000000, 0.0000000, 0.9687500, 0.0000000, -0.9765625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.7343750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -1.0000000, 0.0000000, 0.9687500, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.6796875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.4921875, -0.4609375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.8593750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.6328125, -0.9531250, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.1640625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.9921875, 0.0000000, 0.0000000, 0.0000000, -0.3984375, -0.3515625, 0.0000000, 0.9765625, 0.0000000, 0.2343750, 0.0000000, 0.0000000, 0.0000000, -0.5312500, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.9843750, -0.3203125, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.2265625, 0.3125000, 0.0000000, 0.0000000, -0.0937500, 0.0000000, 0.0000000, 0.0000000, -0.4218750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0390625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.4218750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.4140625, 0.0000000, 0.0000000, -0.0546875, 0.0000000, 0.0000000, 0.0468750, 0.0000000, 0.0000000, -0.3281250, -0.2812500, 0.0000000, 0.0000000, 0.2968750, 0.0000000, 0.0000000, -0.4453125, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.3125000, 0.0000000, -0.5703125, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.3906250, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.2812500, 0.0000000, 0.1015625, 0.0000000, -0.0156250, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -1.0000000, 0.0000000, 0.0000000, 0.0000000, -1.0000000, 0.0000000, -0.4531250, 0.9140625, 0.0000000, 0.9921875, 0.0000000, -0.4687500, 0.0000000, -0.3359375, 0.0000000, 0.0000000, 0.1796875, 0.0000000, -0.6015625, 0.9531250, 0.0000000, 0.2265625, 0.0000000, 0.3125000, 0.0000000, 0.0000000, -0.9921875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.6953125, -0.7578125, 0.0000000, 0.0000000, -0.0390625, 0.0000000, -0.3203125, 0.0000000, 0.0000000, 0.0000000, -0.8515625, 0.0000000, 0.9687500, 0.2734375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.3046875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.2890625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.4453125, 0.0000000, 0.0000000, 0.0312500, 0.0000000, 0.3359375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.7187500, 0.0000000, 0.0000000, 0.2265625, 0.0000000, 0.0000000, 0.5000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.2812500, -0.0625000, 0.0000000, -1.0000000, -0.4531250, 0.0000000, 0.0000000, 0.0000000, 0.9531250, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.2265625, 0.0000000, 0.0000000, -0.9921875, 0.0000000, -1.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.9921875, 0.0000000, 0.0000000, -0.3515625, 0.9609375, -0.6093750, -0.9765625, 0.0000000, 0.9765625, -0.0234375, 0.0000000, 0.4218750, 0.0000000, 0.1796875, 0.0000000, 0.0000000, -0.9921875, 0.9687500, -0.5546875, -0.9609375, 0.2421875, -0.3671875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.3906250, -0.6640625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.3359375, 0.0000000, 0.0000000, 0.0000000, -0.5390625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.3281250, 0.0000000, 0.0000000, 0.0000000, 0.1640625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.2343750, 0.0000000, -0.2812500, 0.0000000, 0.0000000, -1.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.3125000, 0.0000000, 0.0000000, -1.0000000, 0.2500000, 0.8437500, 0.0000000, 0.0000000, -0.4843750, 0.0000000, 0.9921875, 0.0000000, 0.0000000, 0.0000000, -0.2421875, 0.0000000, -0.9765625, 0.7187500, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.3828125, 0.1875000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.4609375, 0.9062500, -0.9921875, 0.0000000, 0.0000000, -0.4140625, 0.7109375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.3437500, 0.3906250, 0.0000000, 0.0000000, 0.6484375, 0.0000000, 0.0000000, -0.4296875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.5234375, 0.0000000, 0.0000000, -0.3281250, 0.0000000, 0.0000000, 0.0000000, 0.0703125, 0.0000000, 0.0000000, 0.6953125, 0.2109375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.3906250, 0.0000000, 0.0000000, 0.2578125, 0.0000000, 0.0000000, 0.0000000, 0.5156250, 0.0000000, 0.0000000, 0.0000000, -0.6250000, 0.0000000, 0.0000000, -0.9921875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.8125000, 0.1406250, -0.8203125, 0.0000000, 0.0312500, -0.5156250, -0.3437500, 0.0000000, -0.3203125, 0.0000000, -0.5312500, 0.0000000, 0.0000000, -0.3984375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0390625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.7734375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.3359375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.1406250, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.1484375, 0.0000000, 0.0000000, 0.0000000, 0.3281250, 0.0000000, 0.0000000, 0.0000000, 0.3046875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.0546875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0078125, 0.0000000, 0.5234375, 0.0000000, -0.4218750, -0.5937500, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.6562500, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.0468750, 0.0937500, 0.0000000, 0.0000000, -0.3437500, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.5078125, 0.0000000, 0.0000000, 0.1171875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.3359375, 0.0000000, 0.0000000, 0.0546875, -0.4843750, 0.2343750, 0.1171875, -0.3984375, 0.0000000, 0.0156250, 0.0000000, 0.0000000, 0.0000000, -0.3750000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.4687500, -0.5234375, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.2890625, 0.0000000, 0.0000000, 0.2500000, 0.0000000, 0.0000000, -0.3906250, -0.5312500, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.2890625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.6015625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.2812500, -0.5781250, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.8906250, 0.0000000, 0.0000000, 0.0000000, 0.5078125, 0.0000000, 0.0000000, 0.2812500, 0.0000000, -0.6640625, -0.3671875, 0.0000000, 0.0000000, 0.0000000, 0.0000000, -0.3750000, 0.0000000, 0.0000000, 0.1093750, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.3515625, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000, 0.0000000};
#endif

#endif
