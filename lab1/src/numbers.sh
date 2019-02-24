#!/bin/bash

touch numbers.txt

for i in {1..150}
do
    od -A n -t d -N 1 /dev/random >> numbers.txt
done