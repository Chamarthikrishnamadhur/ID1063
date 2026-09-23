import numpy as np
A=eval(input("Enter the list "))
a=np.array(A)
a=a*a
print(a)
s=np.mean(a)
s=np.sqrt(s)
print(round(s,2))
