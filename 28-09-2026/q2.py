import numpy as np

# Define a symmetric, positive-definite matrix
A = np.array([[9,15],[15,50]])

# Compute the lower triangular Cholesky factor (Default)
L = np.linalg.cholesky(A)

print("Lower triangular matrix L:\n", L)
# Verify if L @ L.T equals A
print("\nVerification (L @ L.T):\n", np.dot(L, L.T))

