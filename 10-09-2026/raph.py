import matplotlib.pyplot as plt
import numpy as np
import subprocess
import shlex
import math
def func(x):
    return math.exp(x)-2
def raph(x):
    return  (x-(math.exp(x)/(math.exp(x)-2)))
x=1;
x1=np.linspace(-3,2,1000);
y1=(np.exp(x1)-2)
plt.plot(x1,y1)
for i in range (20):
    plt.plot(x,func(x),"o")
    x=raph(x)
plt.savefig("raph.pdf")
subprocess.run(shlex.split("termux-open raph.pdf"))
