import random
def getRand(x,y):
	return random.randint(x,y)
def storescore():
	file = open("scores.txt", "a")
	file.write(name + " " + str(count) + "\n")
file = open("scores.txt", "a+")
count = 1
max = 7
name = raw_input("Welcome to the guessing game!\nPlease enter your name\n")
num = getRand(-101,100)
while count <= max:
	guess = int(raw_input("Type in your guess! (Between -100 to 100) \n"))
	if(guess<num):
		print "Low guess"
		count+=1

	elif(guess>num):
		print "High guess"
		count+=1
	else:
		print "Congratulations, you guessed it in " + str(count) + " tries!"
		storescore()
		break
if(count > max):
	print "Maximum tries reached: " + str(max)
	storescore()
