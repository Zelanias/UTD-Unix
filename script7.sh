#!/bin/bash
echo "Please enter a name for the output file"
a=$((RANDOM%21+20))
let b=0
read f
for file in $f
do
	echo $file
	if((b>a)); 
		then
		echo "Too many Files"
		break
	else
		let b=b+1
	fi
done

