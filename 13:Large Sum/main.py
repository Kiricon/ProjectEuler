# read in the file
with open("Input.txt") as f:
    lines = f.readlines()

total = 0;

for line in lines:
    total += int(line)


print str(total)[0:10]
