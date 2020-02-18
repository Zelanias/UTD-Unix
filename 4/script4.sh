#!/bin/bash
echo "Are you taking CS 3377? Please enter Y/N"
read input
case $input in
	[Yy][Ee][Ss])
		echo "Agreed";;
	[Yy])
		echo "Agreed";;
	[Nn][Oo])
		echo "Disagree";;
	[Nn])
		echo "Disagree";;
	*)
		echo "Invalid input";;
esac
