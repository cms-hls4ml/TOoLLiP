# TOoLLiP

- Model training and conversion code: https://github.com/Brainz22/L1LLPJetTagger.git.
- Emulator tutorial: https://gitlab.cern.ch/fastmachinelearning/cms_mlatl1t_tutorial/-/tree/master/part3

## v3

Each of the following files is contained in the submodule attached in this repo. Please, refer to it for all other relevant files.

- Based on QKeras model: https://github.com/Brainz22/L1LLPJetTagger/blob/main/noNorm_train_qkL1JetTagModel.h5

- HLS ROC curve with layer traces script: https://github.com/Brainz22/L1LLPJetTagger/blob/main/HLS_qk_Roc_Tracing.py

- Conversion notebook to use `hls4ml` emulation-ready arguments: https://github.com/Brainz22/L1LLPJetTagger/blob/main/qkL1JetTagModel_hls_config.ipynb

- Converted HLS project: https://github.com/Brainz22/L1LLPJetTagger/tree/main/TOoLLiP_v3

- hls4ml version/commit used: https://github.com/fastmachinelearning/hls4ml/tree/e1f6a427ab026ee5d9f5874ad7dbe257c868f408

- Model:

![model_summary](L1LLPJetTagger/hls_model.png)

- Logit output qkeras vs. hls model comparison:

![q_dense_1](L1LLPJetTagger/LayerTraces/profiling_q_dense_1.png)


- Expected performance on 4b sample (H-> hh -> 4u) for different LLP masses:
  
![HLS_qk_ROCCurve_4u](L1LLPJetTagger/test4u.png)

- C synthesis results:

![Results](https://github.com/Brainz22/L1LLPJetTagger/blob/main/TOoLLiP_v3/reportInfo.pdf)

