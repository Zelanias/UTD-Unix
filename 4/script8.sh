#!/bin/bash
echo "Please enter a name for output file"
read a
rm -f  $a
count=1
while [ $count -le 100 ]
do
	x=$((RANDOM%100))
	echo $x >> $a
	((count++))
done
