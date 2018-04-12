import numpy as np
import matplotlib.pyplot as plt

datos=np.loadtxt('datos_orden1.txt')
y=np.exp(-1.0*datos[:,0])
dif=np.abs(datos[:,1]-y)/y
plt.plot(datos[:,0],dif,'o')
plt.xlabel('x')
plt.ylabel('error')
plt.savefig('grafica1.png')
plt.close()
