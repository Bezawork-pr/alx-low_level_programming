#!/bin/bash
LD_PRELOAD=./temp/injection.so ./gm 9 8 10 24 75 9
sleep 98 & unset LD_PRELOAD
