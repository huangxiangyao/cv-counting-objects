#!/bin/bash

g++ -ggdb `pkg-config --cflags --libs opencv` cascadeCount.cpp -o cascadeCount
