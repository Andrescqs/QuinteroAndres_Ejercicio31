import numpy as np
import matplotlib.pyplot as plt

datos=np.loadtxt("solu.dat")

plt.figure()
plt.plot(datos[0], datos[1])
plt.savefig("solu.png")