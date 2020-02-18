#!/bin/bash
echo "Please enter 3 strings"
read str1
read str2
read str3
if [ $str1 == $str2 ]
then	echo "Match given"
elif [ $str2 == $str3 ]
then 	echo "Match given"
elif [ $str1 == $str3 ]
then	echo "Match given"
else
	echo "No match given"
fi
