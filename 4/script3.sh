#!/bin/bash
if [ $# != 1 ]
then
	echo "Please enter one argument"
elif test -f "$1";
then
	echo "$1 exists"
else
	echo "$1 does not exist"
fi
