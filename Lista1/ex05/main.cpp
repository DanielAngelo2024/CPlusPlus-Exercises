#include <iostream>
#include <locale.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//ler 2 valores e trocar, exibir antes e depois

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int n1, n2, aux;
	
	cout << "Digite o primeiro n�mero: ";
	cin >> n1;
	cout << "Digite o segundo n�mero: ";
	cin >> n2;
	
	cout << "N�mero 1: " << n1<<endl;
	cout << "N�mero 2: " << n2<<endl;
	
	cout << "Trocando..."<<endl;
	
	aux = n1;
	n1 = n2;
	n2 = aux;
	
	cout<<"N�meros trocados!"<<endl;
	cout<<"N�mero 1: "<<n1<<endl;
	cout<<"N�mero 2: "<<n2<<endl;
	
	return 0;
}
