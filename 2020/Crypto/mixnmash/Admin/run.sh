#!/bin/bash

HOME=/home/ctf
cd $HOME
python pow.py
if [ $? -eq 1 ]
then
    timeout 500 python encrypt.py
fi

