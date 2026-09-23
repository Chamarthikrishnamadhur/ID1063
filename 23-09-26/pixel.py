# Function to edit the value of pixels
# m is rows, n is cols, a is the array, t is threshold
def pixel(m, n, a, t):
    for i in range(m):
        for j in range(n):
            if a[i][j] >= t and a[i][j] <= 255:
                a[i][j] = 255
            else:
                a[i][j] = 0
    print(a)


t = int(input("Enter threshold: "))
a = eval(input("Enter matrix as [[], [], format...]: "))

# Get dimensions from the input matrix
m = len(a)
if m > 0:
    n=len(a[0])
else:
    n=0

pixel(m, n, a, t)
