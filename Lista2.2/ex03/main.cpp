#include <iostream>
#include <locale.h>
#include <math.h>
/*
calcular as ra�zes de uma equa��o do 2� grau.
Os valores lidos dos coeficientes (A,B,C) devem ser v�lidos para a equa��o. 
Se n�o forem, escrever uma mensagem.
Deve ser verificado se existem ra�zes no campo dos reais; se existirem, calcular e imprimi-las, se n�o, escrever uma
mensagem.
*/

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int a, b, c, delta;
	double x1, x2;
	
	cout<<"Digite o coeficiente A: "<<endl;
	cin>>a;
	cout<<"Digite o coeficiente B: "<<endl;
	cin>>b;
	cout<<"Digite o coeficiente C: "<<endl;
	cin>>c;
	
	delta = (pow(b,2)) - (4 * a * c);
	
	if (delta <0){
		cout<<"N�o existem raizes";
	} else {
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		cout<<"O valor de Delta �: "<<delta<<endl;
		cout<<"A primeira raiz �: "<<x1<<endl;
		cout<<"A segunda raiz �: "<<x2<<endl;
	}
	
	
	return 0;
}
