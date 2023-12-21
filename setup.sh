mkdir -p TOoLLiP_v1/NN
SRC=TOoLLip_v1/L1JetTagger/hls4ml_prj/firmware/

cp -r $SRC/defines.h   TOoLLiP_v1/NN/
cp    $SRC/myproject.cpp   TOoLLiP_v1/NN/TOoLLiP_v1.cpp
cp    $SRC/myproject.h   TOoLLiP_v1/NN/TOoLLiP_v1.h
cp -r $SRC/nnet_utils   TOoLLiP_v1/NN/
cp    $SRC/parameters.h   TOoLLiP_v1/NN/
cp -r $SRC/weights    TOoLLiP_v1/NN/
rm TOoLLiP_v1/NN/weights/*.txt

# change the way the weights are read
find ./TOoLLiP_v1/NN \( -type d -name .git -prune \) -o -type f -print0 | xargs -0 sed -i 's/#ifndef __SYNTHESIS__/#ifdef __HLS4ML_LOAD_TXT_WEIGHTS__/'
# rename project (could be done in hlsm4l as well)
find ./TOoLLiP_v1/NN \( -type d -name .git -prune \) -o -type f -print0 | xargs -0 sed -i 's/myproject/TOoLLiP_v1/g'
find ./TOoLLiP_v1/NN \( -type d -name .git -prune \) -o -type f -print0 | xargs -0 sed -i 's/MYPROJECT_H_/TOOLLIP_V1_H_/g'
