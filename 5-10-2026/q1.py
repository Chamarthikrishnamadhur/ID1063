import numpy as np
import matplotlib.pyplot as plt
import shlex
import subprocess
import sympy as sp
#for infty solution k=-1
k=int(input("Enter k(-1 gives infinite solution and 1 gives no solution)") )
x=np.linspace(-1,1,1000)

if k==1:
    y=(1-x)/k
    y1=(-1-k*x)/1
elif k==-1:
    y=(1-x)/k
    y1=(-1-k*x)
else:
    a=np.array([[1,k],[k,1]])
    aS=sp.Matrix(a)
    b=np.array([1,-1])
    y=(1-x)/k
    y1=(-1-k*x)
    rref=aS.rref()
    #nprref=np.array(rref).astype(float)
    p=np.linalg.solve(a,b)
    print("The rref is ",rref)


plt.plot(x,y)
plt.plot(x,y1)
plt.savefig("pt1.pdf")
subprocess.run(shlex.split("termux-open pt1.pdf"))

