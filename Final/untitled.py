import random
def getAvg():
	global a
	sum = 0 
	for i in range(0,99):
		rand = int(random.random()*49)-17
		sum = sum + rand*rand
		a.append(rand*rand)
	avg = sum/100
	return avg
def getHigh(avg):
	global a
	high = 0
	for i in range(0,99):
		if(a[i]>avg):
			high = high +1
	return high
a = []
print str(getAvg()) + " " + str(getHigh(getAvg()))