#include <iostream>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Ler o pre�o por quilo e o peso da refei��o em quilos, imprimir valor a pagar

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	float preco, peso, valor;
	
	cout << "Digite o peso em quilos: ";
	cin >> peso;
	cout << "DIgite o pre�o em quilos: ";
	cin >> preco;
	
	valor = peso * preco;
	
	cout<<"Valor a pagar: "<<valor<< "R$";
	
	return 0;
}
