import numpy as np
a=[]
b=[]
"""with open("a.dat" ,"r") as file:
 #   for line in file:      if len(line)==3:
            a.append(float(line[0:2]))
        else:
            a.append(float(line[0]))
with open("b.dat","r") as file:
    for line in file:
        if len(line)==3:
            b.append(float(line[0:2]))
        elif len(line)==5:
            b.append(float(line[0:4]))
        elif(line!="\n"):
            b.append(float(line[0:len(line)-1]))
print (a)
print(b)"""

A=np.array(a)
B=np.array(b)
A=np.loadtxt("a.dat")
B=np.loadtxt("b.dat")
print(A@B)
