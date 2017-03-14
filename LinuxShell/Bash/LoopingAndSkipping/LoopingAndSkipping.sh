#!/bin/bash

start=1

end=99

for((i=$start;i<=$end;++i))
do
	if [ $((i%2)) -ne 0 ];
	then
		echo -n "$i";
		printf "\n";
	fi
done