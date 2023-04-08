#!/bin/bash
gcc -fpic -shared custom_rand.c -o custom_rand.so
LD_PRELOAD=./custom_rand.so
