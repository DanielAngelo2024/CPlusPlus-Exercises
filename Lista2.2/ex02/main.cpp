#include <iostream>
#include <locale.h>

/*
Ler o saldo banc�rio inicial(saldo), 
Ler valor a ser depositado (cr�dito)(adcSaldo) 
Ler cheque a ser descontado (d�bito)(rmvSaldo)
Calcular o novo saldo
Imprimir informando se o saldo atual � �positivo�,
�nulo� ou �negativo�. Imprimir, tamb�m, o referido saldo.

*/

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	double saldo, adcSaldo, rmvSaldo;
	
	cout<<"Informe o saldo inicial: "<<endl;
	cout<<"R$";
	cin>>saldo;
	cout<<"Digite o valor a ser depositado: "<<endl;
	cout<<"R$";
	cin>>adcSaldo;
	saldo += adcSaldo;
	cout<<"Digite o valor a ser descontado: "<<endl;
	cout<<"R$";
	cin>>rmvSaldo;
	saldo-=rmvSaldo;
	
	if (saldo > 0){
		cout<<"Saldo positivo!"<<endl;
		cout<<"O Saldo atual � de: "<<saldo<<"R$";
	} else if (saldo < 0) {
		cout<<"Saldo negativo!"<<endl;
		cout<<"O Saldo atual � de: "<<saldo<<"R$, Parab�ns voc� deve ao banco!";
	} else {
		cout<<"Saldo nulo ou zerado";
	}
	
	
	return 0;
}
