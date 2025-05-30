#include "NN/TOoLLiP_v2.h" //include of the top level of HLS model
#include "emulator.h" //include of emulator modeling
#include <any>
#include "ap_fixed.h"

using namespace hls4ml_toollip_v2;

class TOoLLiP_emulator_v2 : public hls4mlEmulator::Model{
    private:
        input_t _input[N_INPUT_1_1*N_INPUT_2_1];
        result_t _result[N_LAYER_12];
    public:
        virtual void prepare_input(std::any input)
        {
            input_t* input_p = std::any_cast<input_t*>(input);
            for(int i = 0; i < N_INPUT_1_1*N_INPUT_2_1; ++i)
                _input[i] = std::any_cast<input_t>(input_p[i]);
        }

        virtual void predict()
        {
            TOoLLiP_v2(_input, _result);
        }

        virtual void read_result(std::any result)
        {
            result_t *result_p = std::any_cast<result_t*>(result);
            for (int i = 0; i < N_LAYER_12; ++i)
                result_p[i] = _result[i];
        }

};

extern "C" hls4mlEmulator::Model* create_model()
{
    return new TOoLLiP_emulator_v2;
}

extern "C" void destroy_model(hls4mlEmulator::Model* m)
{
    delete m;
}
