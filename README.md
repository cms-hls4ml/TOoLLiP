# TOoLLiP

- Model training and conversion code: https://github.com/ucsd-hep-ex/L1JetTag
- Emulator tutorial: https://gitlab.cern.ch/fastmachinelearning/cms_mlatl1t_tutorial/-/tree/master/part3

## v1
- Based on QKeras model: https://github.com/ucsd-hep-ex/L1JetTagger/blob/eb93e812690dcf1431bf5cb27bf063d154daed1e/qkL1JetTagModel.h5
- Convert script: https://github.com/ucsd-hep-ex/L1JetTagger/blob/eb93e812690dcf1431bf5cb27bf063d154daed1e/HLS_qk_Roc.py
- Converted HLS project: https://github.com/ucsd-hep-ex/L1JetTagger/tree/eb93e812690dcf1431bf5cb27bf063d154daed1e
- hls4ml version/commit used: https://github.com/jmduarte/hls4ml/tree/8dea6ad51f78be4662513c1d4482b4b0ab94c5de
- Model:
![model_summary](https://github.com/cms-hls4ml/TOoLLiP/assets/4932543/788b4d4b-4268-4ad4-94ab-26b4edadb0de)

- Expected performance:
  
![hls_Qk_ROCCurve](https://github.com/cms-hls4ml/TOoLLiP/assets/4932543/1470ab5b-ec51-4741-a500-ace2a7a14b5d)

![profiling_sigmoid](https://github.com/cms-hls4ml/TOoLLiP/assets/4932543/48042a16-5a9c-4697-b891-a1b57fa899ac)
