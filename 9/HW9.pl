#!/usr/bin/perl
$randomint = int(rand(101)) + 100;
$count = 0;
$max = 7;
open($DATA, ">>scores.txt") || die "Could not open file scores.txt";
print "Welcome to Perl random number guessing game, between 100 and 200, inclusive.\n";
print "Enter your name: \n";
$name = <STDIN>;
$name = substr $name, 0, length($name)-1;
while($count < $max){ 
	$count++;
	print "Please enter your guess: \n";
	$input = int(<STDIN>);
	if($input == $randomint){
		print "Correct Guess! \n";
		print $DATA "$name:$count \n";
		last;
	}
	if($input < $randomint){
		print "Low Guess!\n";
	}
	if($input > $randomint){
		print "High Guess! \n";
	}
}
if($count == $max){
	print "You have tried $max number of times";
	print $DATA "$name:$count \n";
}