#include <iostream>
#include <locale.h>
/*Digitar dois n�meros inteiros 
imprimir qual o maior valor dos dois e, se s�o iguais */

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int a, b;
	
	cout<<"Digite o primeiro valor: \n";
	cin>>a;
	cout<<"Digite o segundo valor: \n";
	cin>>b;
	
	if (a>b) {
		cout<<a<<" � maior que "<<b;
	} 
	else if (b>a) {
		cout<<b<<" � maior que "<<a;
	}
	else {
		cout<<"S�o iguais!";
	}
	
	
	return 0;
}
