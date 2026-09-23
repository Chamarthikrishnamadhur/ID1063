import sympy as sp

# Define symbols
x1, x2, x3,x4,x5,x6 = sp.symbols('x1 x2 x3 x4 x5 x6')

# Define singular matrix A and vector b using SymPy Matrix
A = sp.Matrix([[6,0,0,-1,-1,0], 
              [60,15,0,-9,0,-10],
              [12,0,4,-1,-4,-1],
              [0,5,0,-1,0,0]])
b = sp.Matrix([0,0,0,0])

# Solve the linear system Ax = b
solution = sp.linsolve((A, b), x1, x2,x3,x4,x5,x6)

print("Parameterized Solution set:", solution)

