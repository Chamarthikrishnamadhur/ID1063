#code by madhur
#on 17-09-2026
"""import numpy as np
a=np.array([[2,3],[4,6]])
k=4
b=np.array([6,3*k])
print(np.linalg.solve(a,b))
#the code works 
k=3
print(np.linalg.solve(a,b))
"""
import numpy as np
import shlex
import subprocess
import matplotlib.pyplot as plt
def line_dir_pt(m,A,k1,k2):
    len = 10
    dim = A.shape[0]
    x_AB = np.zeros((dim,len))
    lam_1 = np.linspace(k1,k2,len)
    for i in range(len):
        temp1 = A + lam_1[i]*m
        x_AB[:,i]= temp1.T
    return x_AB


# Fallback chhttps://raw.githubusercontent.com/Chamarthikrishnamadhur/ID1063/refs/heads/master/10-09-2026/sol.pyeck if the residuals array returns empty
# Fallback check if the residuals array returns empty
# A singular matrix (rows are linearly dependent)
A = np.array([[2, 3],

              [4, 6]])

# Example b vector
k=4
b = np.array([6, 3*k])

# Method 1: Using the Least-Squares solver (Recommended)
# rcond=None lets NumPy automatically choose the cut-off for tiny eigenvalues
x_lstsq, residuals, rank, s = np.linalg.lstsq(A, b, rcond=None)


print("Rank is",rank)
print("Solution via lstsq:", x_lstsq)
print("The above code gives one out of the infinfite possible solutions")
error=np.sum(((A@x_lstsq)-b)**2)
print("The error is zero",error)
k=int(input("Enter number other than 4: "))
b=np.array([6,3*k])
x_lstsq,residuals,rank,s=np.linalg.lstsq(A,b,rcond=None)
#print(residuals)
#if the error is noinzero, the solution dosent exist
error = np.sum(((A@ x_lstsq) - b) ** 2)
#print("The error is ",error)
if not np.isclose(error, 0):
    print(f"No exact solution exists. Calculated squared error: {error}")
x=np.linspace(0,100,10000)
y=2-(2/3)*x
y1=line_dir_pt(-2/3,x,0,10)
plt.plot(x,y,color='blue',label='old eq1')
plt.plot(x,y1,color='green',label='old eq2')
k=int(input("Enter other than 4 and 0 ") )
y=(3*k-4*x)/6
plt.plot(x,y,color='red',label='new eq2')
plt.legend()
plt.savefig("graph.pdf")
subprocess.run(shlex.split("termux-open graph.pdf"))
