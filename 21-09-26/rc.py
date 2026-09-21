import matplotlib.pyplot as plt
import subprocess
import shlex
import math
import numpy as np
x=np.linspace(0,140)
T=40
y=(1-np.exp(-x/T))
#the theoretical  solution
xt=-40*(math.log(0.05))
yt=0.95
plt.plot(x,y)
plt.plot(xt,yt,marker='o',color='red')
plt.axvline(x=120)
plt.savefig("Graph.pdf")
subprocess.run(shlex.split("termux-open Graph.pdf"))

