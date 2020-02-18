#!/bin/bash
y=$((RANDOM%127 + 1))
echo "Guessing Game! Try to guess the randomly generated number between 0 and 128"
x=1
count=0
while [ $x -eq 1 ]
do
	echo "Type in your guess:"
	read a
	count=$(($count+1))
	if [ $y == $a ]
	then
		echo "Correct guess!"
		echo "Score:" $count
		echo "Please enter a name:"
		read name
		echo $name $count >> scores.txt
		echo "Top 3 scores"
		sort -nk2 scores.txt | uniq | head -3
		x=0
	elif [ $y -gt $a ]
	then	echo "Low guess."
	elif [ $y -lt $a ]
	then	echo "High guess."
	fi
done
