#include <iostream>
#include <math.h>

using namespace std;

int calcularDistancia(int x1, int x2, int y1, int y2){
	int distancia;
	distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return distancia;
}

int main(int argc, char** argv) {
	
	
	int x1, x2, y1, y2, distancia;
	
	cout<<"Digite X1: "<<endl;
	cin>>x1;
	cout<<"Digite X2: "<<endl;
	cin>>x2;
	cout<<"Digite Y1:"<<endl;
	cin>>y1;
	cout<<"Digite Y2:"<<endl;
	cin>>y2;
	
	distancia = calcularDistancia(x1, x2, y1, y2);
	
	cout<<"Distancia: "<<distancia;
	
	return 0;
}
