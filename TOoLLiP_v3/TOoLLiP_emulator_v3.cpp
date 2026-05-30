#include "NN/TOoLLiP_v3.h" //include of the top level of HLS model
#include "emulator.h" //include of emulator modeling
#include <any>
#include "ap_fixed.h"

using namespace hls4ml_model_emu_v3;

class TOoLLiP_emulator_v3 : public hls4mlEmulator::Model{
    private:
        input_t _input[10*13];
        result_t _result[1];
    public:
        virtual void prepare_input(std::any input)
        {
            input_t* input_p = std::any_cast<input_t*>(input);
            for(int i = 0; i < 10*13; ++i)
                _input[i] = std::any_cast<input_t>(input_p[i]);
                //_input[i] = input_p[i];
        }

        virtual void predict()
        {
            TOoLLiP_v3(_input, _result);
        }

        virtual void read_result(std::any result)
        {
            result_t *result_p = std::any_cast<result_t*>(result);
            for (int i = 0; i < 1; ++i)
                result_p[i] = _result[i];
        }

};

extern "C" hls4mlEmulator::Model* create_model()
{
    return new TOoLLiP_emulator_v3;
}

extern "C" void destroy_model(hls4mlEmulator::Model* m)
{
    delete m;
}
