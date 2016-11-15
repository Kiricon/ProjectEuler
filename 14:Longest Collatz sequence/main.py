def even(n):
    return n/2

def odd(n):
    return 3*n+1

num = 13
i = 0

while num != 1:
    print num
    if num % 2 == 0:
        num = even(num)
    else:
        num = odd(num)
    i += 1
    
print num
