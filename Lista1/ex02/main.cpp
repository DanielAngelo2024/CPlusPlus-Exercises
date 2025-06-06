#include <iostream>
#include <math.h>
#include <locale.h>
#include <iomanip>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Calcular e imprimir a Hipotenusa

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	cout<<fixed<<setprecision(2);
	
	float ca, co, hipo;
	
	cout<<"Digite o cateto oposto: ";
	cin>>ca;
	cout<<"Digite o cateto adjacente: ";
	cin>>co;
	
	hipo=sqrt(pow(ca, 2) + pow(ca, 2));
	
	cout<<"A hipotenusa de "<<ca<<" e "<<co<<" é: "<<hipo;
	
	
	return 0;
}
