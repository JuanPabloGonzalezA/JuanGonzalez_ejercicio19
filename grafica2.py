import numpy as np
import matplotlib.pyplot as plt

datos=np.loadtxt('datos_orden2.txt')
y=np.cos(datos[:,0])
dif=np.abs((y-datos[:,1]))
plt.plot(datos[:,0],dif,'o')
plt.xlabel('x')
plt.ylabel('error')
plt.savefig('grafica2.png')
plt.close()
