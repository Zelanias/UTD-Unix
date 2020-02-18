#!/usr/bin/perl
$count = 0;
$max = 100;
$sum = 0;
@nums;
while($count < $max){ 
	$randomint = int(rand(49))-17;
	push(@nums,$randomint*$randomint);
	$sum = $sum+$randomint*$randomint;
	$count = $count+1;
}
$avg = $sum/100;
$count = 0;
$high=0;
while($count<$max){
	if($nums[$count]>$avg){
		$high = $high +1;
	}$count = $count+1;
}
print $high," ", $avg;
