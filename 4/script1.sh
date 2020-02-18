#!/bin/bash
x=$((RANDOM%10 + 1))
y=$((RANDOM%10 + 1))
if((x==y));
then
	echo "Match Found"
else
	echo "Different Numbers"
fi
