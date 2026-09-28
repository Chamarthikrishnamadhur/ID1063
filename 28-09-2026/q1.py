import numpy as np
import shlex
import subprocess
import matplotlib.pyplot as plt

# 1. Initialize the 3D plotting environment
fig = plt.figure(figsize=(10, 7))
ax = fig.add_subplot(111, projection='3d')

# --- PLOT A 3D PLANE ---
# Define X and Y coordinate ranges
x_range = np.linspace(-5, 5, 50)
y_range = np.linspace(-5, 5, 50)
X, Y = np.meshgrid(x_range, y_range)

# Equation of a plane: e.g., 2x + 2y - z = 0 -> Z = 2X + 2Y
Z = -1 * X +-1 * Y

# Render the plane as a semi-transparent surface
plane = ax.plot_surface(X, Y, Z, alpha=0.5, cmap='viridis')
z1=-0.5*X
plane=ax.plot_surface(X,Y,z1,alpha=0.5,cmap='viridis')

# --- PLOT A 3D LINE ---
# Define parametric coordinates for a line (e.g., a spiral helical line)
t = np.linspace(-5, 5, 100)
line_x = -2*t
line_y = t
line_z =t

# Render the 3D line
ax.plot3D(line_x, line_y, line_z, color='red', linewidth=3, label='3D Line')

# --- CUSTOMIZE PLOT ---
ax.set_xlabel('X Axis')
ax.set_ylabel('Y Axis')
ax.set_zlabel('Z Axis')
#ax.set_title('3D Plane and Line Visualization')
ax.legend()

# Display the interactive window
plt.savefig("3d.pdf")
subprocess.run(shlex.split("termux-open 3d.pdf"))
