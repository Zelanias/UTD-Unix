#!/bin/bash
a=$((RANDOM%21+20))
b=0
for f in  *
do
	if((b>a)); then
		echo "Too many Files"
		break
	else
		b=((b+1))
	fi
done
