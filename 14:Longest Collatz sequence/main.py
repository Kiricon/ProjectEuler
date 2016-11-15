def even(n):
    return n/2

def odd(n):
    return 3*n+1

num = 13
i = 0

while num != 1:

    print str(num)+'\n'

    if( i != 0):
        num = even(num)
        i -= 1
    else:
        num = odd(num)
        i = 3

print num
