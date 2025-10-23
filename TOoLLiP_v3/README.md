# TOoLLiP

- Model training and conversion code: https://github.com/Brainz22/L1LLPJetTagger.git.
- Emulator tutorial: https://gitlab.cern.ch/fastmachinelearning/cms_mlatl1t_tutorial/-/tree/master/part3

## v3
- Based on QKeras model: https://github.com/Brainz22/L1LLPJetTagger/blob/main/noNorm_train_qkL1JetTagModel.h5
- HLS ROC curve with layer traces script: https://github.com/Brainz22/L1LLPJetTagger/blob/main/HLS_qk_Roc_Tracing.py

- Convert notebook to use `hls4ml` emulation-ready arguments: https://github.com/Brainz22/L1LLPJetTagger/blob/main/qkL1JetTagModel_hls_config.ipynb

- Converted HLS project: https://github.com/Brainz22/L1LLPJetTagger/tree/main/TOoLLiP_v3

- hls4ml version/commit used: https://github.com/fastmachinelearning/hls4ml/tree/e1f6a427ab026ee5d9f5874ad7dbe257c868f408

- Model:
![model_summary](https://github.com/cms-hls4ml/TOoLLiP/assets/4932543/788b4d4b-4268-4ad4-94ab-26b4edadb0de)



- Expected performance:
  
![hls_Qk_ROCCurve](https://github.com/cms-hls4ml/TOoLLiP/assets/4932543/1470ab5b-ec51-4741-a500-ace2a7a14b5d)

![profiling_sigmoid](https://github.com/cms-hls4ml/TOoLLiP/assets/4932543/48042a16-5a9c-4697-b891-a1b57fa899ac)
