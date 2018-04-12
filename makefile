primera : grafica1.png
segundas : grafica2.png
grafica1.png : datos_orden1.txt
	python grafica1.py
datos_orden1.txt : orden1.x
	./orden1.x > datos_orden1.txt
orden1.x :
	c++ 4kas.cpp -o orden1.x

grafica2.png : datos_orden2.txt
	python grafica2.py
datos_orden2.txt : orden2.x
	./orden2.x > datos_orden2.txt
orden2.x :
	c++ segunda.cpp -o orden2.x

clean : 
	rm grafica1.png grafica2.png datos_orden1.txt datos_orden2.txt orden1.x orden2.x
