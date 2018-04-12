#include <iostream>
#include <cstdlib>
using namespace std;
double f(double x, double y, double z);
double f2(double x, double y,double z);
int main(){
	double y=1;
	double x=0;
	double z=0;
	double h=0.1;
	int N=100;
	double zant=0;
	double yant=1;
	
	int i = 0;
	double k1;
	double k2;
	double k3;
	double k4;
	for(i=0;i<N;i++){
		k1=f2(x,yant,zant);
		k2=f2(x+h/2,yant,zant+h*k1/2);
		k3=f2(x+h/2,yant,zant+h*k2/2);
		k4=f2(x+h,yant,zant+h*k3);
		z=zant+h*(k1+2*k2+2*k3+k4)/6;

		k1=f(x,yant,zant);
		k2=f(x+h/2,yant+h*k1/2,zant);
		k3=f(x+h/2,yant+h*k2/2,zant);
		k4=f(x+h,yant+h*k3,zant);
		y=yant+h*(k1+2*k2+2*k3+k4)/6;
		yant=y;
		zant=z;
		x=x+h;
		cout<<x<<" "<<y<<" "<<endl;
	}
	return 0;
}

double f(double x,double y, double z){
	return z;
}
double f2(double x, double y,double z){
	return -1*y;
}
