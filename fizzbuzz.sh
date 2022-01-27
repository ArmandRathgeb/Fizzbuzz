#!/bin/bash
for i in {1..100}
do
    if [ $(expr $i % 15) -eq 0 ]; then
        echo "fizzbuzz"
    elif [ $(expr $i % 3) -eq 0 ]; then
        echo "fizz"
    elif [ $(expr $i % 5) -eq 0 ]; then
        echo "buzz"
    else
        echo "$i"
    fi
done