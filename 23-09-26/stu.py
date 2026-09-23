def streak(a,n):
    sum_a=0
    for i in range(n,len(a)):
        if (a[i]==0):
            return sum_a
        sum_a+=1
        return sum_a
def study():
    n=int(input("Enter the streak"))

    a=eval(input("Enter the list"))
    for e in range(len(a)):
        if streak(a,e)>n:
            print(n+e+1)
    print(0)
study()
