#include <iostream>
#include <cstdlib>
using namespace std;
double f(double x, double y);
int main(){
	double y=1;
	double x=0;
	double z=0;
	double h=0.1;
	int N=30;
	double zant=0;
	double yant=1;
	
	int i = 0;
	double k1;
	double k2;
	double k3;
	double k4;
	for(i=0;i<N;i++){
		k1=f(x,y);
		k2=f(x+h/2,y+h*k1/2);
		k3=f(x+h/2,y+h*k2/2);
		k4=f(x+h,y+h*k3);
		y=y+h*(k1+2*k2+2*k3+k4)/6;
		x=x+h;
		cout<<x<<" "<<y<<endl;
	}
	return 0;
}

double f(double x,double y){
	return -1*y;
}
