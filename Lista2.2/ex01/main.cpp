#include <iostream>
#include <locale.h>

/*
ler o peso de uma mochila
e imprimir a mensagem: “mochila leve” caso o peso esteja abaixo de 5 kg. 
Caso o peso esteja compreendido entre 5kg e 10 kg, escrever “mochila pesada”;
e se estiver acima, imprimir “mochila muito pesada”.

*/

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	double peso;
	
	cout<<"Digite o peso: "<<endl;
	cin>>peso;
	
	if (peso >= 5 && peso <= 10) {
		cout<<"Mochila pesada!";
	} else if (peso < 5) {
		cout<<"Mochila leve";
	} else {
		cout<<"Mochila muito pesada!";
	}
	return 0;
}
