#!/bin/bash
cp ./u-boot.bin ./zImage
rm i8320.tar
tar cvf i8320.tar zImage
rm zImage
