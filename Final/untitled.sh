#!/bin/bash
getavg(){}
b=0
declare -ai nums 
count=0
while [ $count -le 99 ]
do
	x=$((RANDOM%49-17))
	nums[$count]=x*x
	((count++))
	let b=b+x*x
done
declare -i c=b/100
count=0
high=0
while [ $count -le 99 ]
do
	declare -i temp=${nums[$count]}
	((count++))
	if [ $temp -gt $c ];
	then
		let high=high+1
	fi
done
echo $b $high
