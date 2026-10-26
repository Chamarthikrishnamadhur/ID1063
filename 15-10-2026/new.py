import matplotlib.pyplot as plt
import numpy as np
import shlex
import subprocess
import random
import math
#random number gen
b=math.pow((63*(random.random())+1),1/3)#getting random  variabvle
#probabiulity of variables

c=np.zeros(1000)
for i in range (1000):
    c[i]=b

def fun(s):
    return (c[:] < s).sum(axis=0) / len(c)
x=np.linspace(0,1,1000)
p=np.linspace(0,6,100)
x1=np.linspace(1,4,1000)
y1=(1/63)*(x1**3-1)
x2=np.linspace(4,5,1000)
plt.title("CDF function")
plt.plot(x,0*x)
plt.plot(x1,y1)
plt.grid()
plt.plot(x2,(x2/x2))
y=fun(p)
plt.stem(p,y)
plt.savefig("new1.pdf")
subprocess.run(shlex.split("termux-open new1.pdf"))

