import subprocess
import shlex
import matplotlib.pyplot as plt
import numpy as np
x=np.linspace(-1,0,1000)
x1=np.linspace(0,1,1000)
y=np.sin(2*x)
a=0
b=2
x2=np.linspace(-0.25,0.25)
y2=(2*x2)
y1=a+b*x1
plt.plot(x,y)
plt.plot(x1,y1)
plt.plot(0,0,marker='o')
plt.plot(x2,y2)
plt.savefig("code.pdf")
subprocess.run(shlex.split("termux-open code.pdf"))
