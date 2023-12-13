mkdir -p TOoLLip_v1/NN
SRC=TOoLLip_v1/L1JetTagger/hls4ml_prj/firmware/

cp -r $SRC/defines.h   TOoLLip_v1/NN/
cp    $SRC/myproject.cpp   TOoLLip_v1/NN/
cp    $SRC/myproject.h   TOoLLip_v1/NN/
cp -r $SRC/nnet_utils   TOoLLip_v1/NN/
cp    $SRC/parameters.h   TOoLLip_v1/NN/
cp -r $SRC/weights    TOoLLip_v1/NN/
