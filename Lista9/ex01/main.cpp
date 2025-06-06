#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;

double calcularAreaCirculo(double raio){
	return M_PI * pow(raio, 2);
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	double raio, area;
	cout<<"Digite o raio: "<<endl;
	cin>>raio;
	area = calcularAreaCirculo(raio);
	cout<<"Área do circulo: "<<area;
	return 0;
}
