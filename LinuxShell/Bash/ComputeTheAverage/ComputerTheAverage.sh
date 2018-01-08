#!/bin/bash

read numberOfDigits

declare -i total=0

for((i=0;i<numberOfDigits;i++));
{
    read number
    
    total+=number
}

printf "%.3f" $(echo "scale=4;$total/$numberOfDigits" | bc)