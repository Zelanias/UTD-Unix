#!/bin/bash
a=$((RANDOM%63 - 21))
b=$((RANDOM%63 - 21))
c=$((RANDOM%63 - 21))
d=$((RANDOM%63 - 21))
e=$((RANDOM%63 - 21))
f=$((($a+$b+$c+$d+$e)/5))
echo $f
if((f>20));
then
	echo "High Average"
else
	echo "Low Average"
fi
