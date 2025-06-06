#include <iostream>
#include <locale.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int numerador, denominador, resto;
	double s;
	s=0;
	numerador = 2;
	denominador = 2;
	
	for (int i = 1; i <= 20; i++) {
		resto % numerador;
		cout<<"Numerador: "<<numerador<<endl;
		cout<<"Denominador: "<<denominador<<endl;
		cout <<"S "<< s << endl;
		if (resto = 1) {
			s += pow(numerador, 2) / denominador;
			numerador += 3;
			denominador *= 3;
			
		}else if (resto = 0) {
			s -= pow(numerador, 2) / denominador;
			numerador += 3;
			denominador *= 3;
		}
		
	}
	return 0;
}
