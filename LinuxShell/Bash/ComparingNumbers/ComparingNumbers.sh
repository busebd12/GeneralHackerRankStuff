#!/bin/bash

read X;

read Y;

#if X is less than Y
if [ "$X" -lt "$Y" ];
then
	echo -n "X is less than Y";
fi

#if X is greater than Y
if [ "$X" -gt "$Y" ];
then
	echo -n "X is greater than Y";
fi

#if X is equal to Y
if [ "$X" -eq "$Y" ];
then
	echo -n "X is equal to Y";
fi

