import math

num =  str(int(math.pow(2, 1000)))

total = 0;


for i in range(0, len(num)):
    total += int(num[i])


print total;
