#code by madhur
#on 23-09-26
#importing function
import numpy as np
#input
A=eval(input("Enter the list "))
a=np.array(A)
a=a*a
#print(a)
s=np.mean(a)
s=np.sqrt(s)
#we took squraes and mean and put root
print(round(s,2))
