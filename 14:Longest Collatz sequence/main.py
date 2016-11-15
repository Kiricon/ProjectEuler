def even(n):
    return n/2

def odd(n):
    return 3*n+1


def collatz(num):
    i = 0
    while num != 1:
        if num % 2 == 0:
            num = even(num)
        else:
            num = odd(num)
        i += 1
    return i

largestNum = 0
largestSequence = 0

for n in range(1,1000000):

    newNum = collatz(n)

    if newNum > largestSequence:
        largestSequence = newNum
        largestNum = n


print largestNum
print largestSequence
