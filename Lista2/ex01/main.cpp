#include <iostream>
#include <locale.h>
/*Digitar dois números inteiros 
imprimir qual o maior valor dos dois e, se são iguais */

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
		cout<<a<<" é maior que "<<b;
	} 
	else if (b>a) {
		cout<<b<<" é maior que "<<a;
	}
	else {
		cout<<"São iguais!";
	}
	
	
	return 0;
}
