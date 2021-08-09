#!/bin/bash
clear
python3 ../../PSPBuilder/main.py
make
cp ./EBOOT.PBP game/EBOOT.PBP
cp ./PARAM.SFO game/PARAM.SFO
#make clean