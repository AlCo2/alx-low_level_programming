#!/bin/bash

# a script that creates a static library
# called libmay.a from all the .c files
# that are in the current directory

gcc -c *.c
ar rc libmay.a *.o
echo y | rm -I *.o
