
branches = 0

w, h = 21,21
Matrix = [[1 for x in range(w)] for y in range(h)]


for x in range(1, w):
    for y in range(1, h):
        Matrix[x][y] = Matrix[x][y-1]+Matrix[x-1][y]


print Matrix[w-1][h-1]
