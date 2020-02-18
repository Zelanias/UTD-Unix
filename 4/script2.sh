#!/bin/bash
y=$((RANDOM%10 + 1))

if [ $# -eq 0 ]
then
	echo "No arguments were provided"
elif [ $# != 1 ]
then
	echo "More then one argument was provided"
elif [ $1 -eq $y ]
then
	echo "Argument provided matched randomly generated number"
else
	echo "Argument provided didn't match the randomly generated number"
fi
