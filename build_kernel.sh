#!/bin/bash
	make rk3188_sdk_android-4.4_defconfig
	make kernel.img -j16
	echo "*** OKAY ***"









