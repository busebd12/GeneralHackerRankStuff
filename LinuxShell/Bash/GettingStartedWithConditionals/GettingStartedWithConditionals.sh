#!/bin/bash

read character;

if [[ $character == 'Y' || $character == 'y' ]];
then
	echo "YES";
else
	echo "NO";
fi