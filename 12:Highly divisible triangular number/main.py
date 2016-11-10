#!/usr/bin/env python
from math import sqrt, ceil

total = 0
loop = True
i = 0



def findDivisors(t):
    x  = 0
    plus = 1
    divisor = 1
    while x <= t/2:
        x += plus
        if t % x ==0:
            divisor +=1

    return divisor

while loop:

    i += 1
    total += i


    if findDivisors(total) > 5:
        loop = False


print total
