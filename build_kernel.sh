#!/bin/bash



export PATH=$PATH:$(pwd)/../Compiler/ZyC_Clang_18/bin
export CC=clang
export CLANG_TRIPLE=aarch64-linux-gnu-
export CROSS_COMPILE=aarch64-linux-gnu-
export CROSS_COMPILE_ARM32=arm-linux-gnueabi-
export CONFIG_BUILD_ARM64_DT_OVERLAY=y

export ARCH=arm64
export SUBARCH=arm64
export DTC_EXT=dtc

if [ ! -d "out" ]; then
	mkdir out
fi

start_time=$(date +%Y.%m.%d-%I-%M)

start_time_sum=$(date +%s)

make ARCH=arm64 O=out CC=clang a34x_stock_mod

make ARCH=arm64 O=out CC=clang -j$(nproc) 2>&1 | tee kernel_log-${start_time}.txt

end_time_sum=$(date +%s)

end_time=$(date +%Y.%m.%d-%I-%M)

duration=$((end_time_sum - start_time_sum))

hours=$((duration / 3600))
minutes=$(( (duration % 3600) / 60 ))
seconds=$((duration % 60))

echo O tempo de execução do script é: ${hours} horas, ${minutes} minutos, ${seconds} segundos.

if [ -f out/arch/arm64/boot/Image.gz ]; then
	echo "***compactando essa porra ...***"
	# cp out/arch/arm64/boot/Image.gz Image.gz
	cp out/arch/arm64/boot/Image.gz tools/AnyKernel3/Image.gz
	cd tools/AnyKernel3
	zip -r9 a34x_kernel-mod-${end_time}.zip * > /dev/null
	cd ../..
	mv tools/AnyKernel3/a34x_kernel-mod-${end_time}.zip a34x_kernel-mod-${end_time}.zip
	rm -rf tools/AnyKernel3/Image.gz
	echo " "
	echo "***ta feito essa porra...***"
	echo " "
	exit 0
else
	echo " "
	echo "***deu merda!***"
	exit 0
fi