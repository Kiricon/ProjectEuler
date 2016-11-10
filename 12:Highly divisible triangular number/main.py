#!/usr/bin/env python
import math

total = 0
loop = True
i = 0



def findDivisors(t):

    divisor = 0
    for x in range(1, int(math.ceil(math.sqrt(t)))):
        if t % x == 0:
            divisor +=2
        else:
            continue

    return divisor

while loop:

    i += 1
    total += i


    if findDivisors(total) > 500:
        loop = False


print total
