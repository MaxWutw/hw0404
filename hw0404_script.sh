#!/bin/bash
gcc -c mychess.c hw0404.c
gcc hw0404.o mychess.o -o hw0404
touch hw0404_test.out
for i in $(seq 1 10);do
    ./hw0404 $i 
done
