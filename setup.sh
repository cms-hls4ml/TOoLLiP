mkdir -p TOoLLip_v1/NN
SRC=TOoLLip_v1/L1JetTagger/hls4ml_prj/firmware/

cp -r $SRC/defines.h   TOoLLip_v1/NN/
cp    $SRC/myproject.cpp   TOoLLip_v1/NN/
cp    $SRC/myproject.h   TOoLLip_v1/NN/
cp -r $SRC/nnet_utils   TOoLLip_v1/NN/
cp    $SRC/parameters.h   TOoLLip_v1/NN/
cp -r $SRC/weights    TOoLLip_v1/NN/

#change the way the wieghts are read
find ./TOoLLip_v1/NN \( -type d -name .git -prune \) -o -type f -print0 | xargs -0 sed -i 's/#ifndef __SYNTHESIS__/#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__/'
