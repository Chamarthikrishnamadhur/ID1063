#code by madhur
#1-10-2026
import matplotlib.pyplot as plt
import numpy as np
import subprocess
import shlex
def fucn(a):
    if a==0:
        return 1;
    return (2*fucn(a-1)+a*2**a)
x=np.linspace(0,10,10000)
x1=np.linspace(0,10,10)
y=(x*(x+1)+1)*np.power(2,x-1)
y1=[]
for i in range(10):
    y1.append(fucn(i))
plt.plot(x1,y1,color='red')
    
plt.plot(x,y)
plt.savefig("z.pdf")
subprocess.run(shlex.split("termux-open z.pdf"))
