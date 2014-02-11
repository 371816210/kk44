#!/bin/bash
	make rk3188_tb_android-4.4_defconfig
	make zkernel.img -j16
	echo "*** OKAY ***"









