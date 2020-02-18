file = raw_input("Please enter a file name: ")

a = []

for line in open(file).readlines():

	a.extend(line.split())

b = 0

c = 0

for word in a:

	if(word.endswith("!") or word.endswith(".") or word.endswith("?")):

        	b = b+1

     	c = c+1

print("Sentences count :" + str(b))

print("Word count: " + str(c))
