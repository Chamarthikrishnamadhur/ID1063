import matplotlib.pyplot as plt
import numpy as np
import shlex
import subprocess
x=np.linspace(0,1,1000);
x1=np.linspace(1,4,1000);
y1=(1/63)*(x1**3-1);
x2=np.linspace(4,5,1000);
plt.title("CDF function");
plt.plot(x,0*x);
plt.plot(x1,y1);
plt.grid();
plt.plot(x2,0*x2);
plt.savefig("new1.pdf");
subprocess.run(shlex.split("termux-open new1.pdf"));

