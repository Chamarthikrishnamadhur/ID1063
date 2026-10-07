import matplotlib.pyplot as plt
import numpy as np
import subprocess
import shlex
x1=np.linspace(1,2,1000)
x2=np.linspace(-1,1,1000)
x=np.linspace(-1,2,1000)
y1=np.power(x1,3)+x1*x1+1
y2=5*x2+-2*x2
plt.plot(x,y1)
plt.plot(x,y2)
plt.savefig("new.pdf")
subprocess.run(shlex.split("termux-open new.pdf"))
