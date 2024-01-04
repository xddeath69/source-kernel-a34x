#/bin/bash
#bora la porra!
export PATH=$PATH:$/home/xddeath69/c/bin
export CC=clang
export CLANG_TRIPLE=aarch64-linux-gnu-
export CROSS_COMPILE=aarch64-linux-gnu-
export CROSS_COMPILE_ARM32=arm-linux-gnueabi-
export CONFIG_BUILD_ARM64_DT_OVERLAY=y
export ARCH=arm64
export DTC_EXT=dtc
make ARCH=arm64 O=out CC=clang 
make ARCH=arm64 O=out CC=clang menuconfig
