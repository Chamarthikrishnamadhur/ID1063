#code by madhur
#on 23-09-26
#importing function
import numpy as np



def rms (A):

    for a in A:#A=eval(input("Enter the list "))
        sa=a.size
        a=a@a
        #print(a)
        s=np.sum(a)/sa
        s=np.sqrt(s)
#we took squraes and mean and put root
        print(round(s,2))
A=[np.array([3,4,0,5]),np.array([1,-1,1,-1,1]),np.array([7.5])]
rms(A)
