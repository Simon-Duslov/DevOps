#!/bin/bash

makefile = "../src/makefile"

make -f $makefile clean

make -f $makefile

make -f $makefile test

usr/bin/tests

make -f $makefile package
