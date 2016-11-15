
down = 2
left = 2
branches = 0


def move(d, l):
    global branches
    if(d > 0):
        newD = d-1
        newL = l
        move(newD, newL)

    if(l > 0):
        newD = d
        newL = l-1
        move(newD, newL)


    if d == 0 and l == 0:
        branches +=1


move(down, left)

print branches
