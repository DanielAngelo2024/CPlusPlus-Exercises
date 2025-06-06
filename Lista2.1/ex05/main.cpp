#include <iostream>
#include <locale.h>

/*
 ler um número inteiro positivo 
 imprir a mensagem “É Par” se este for par, 
 caso contrário, imprimir a mensagem “É Ímpar”.

*/


using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int n, resto;
	
	cout<<"Digite um número inteiro positivo:"<<endl;
	cin>>n;
	resto = n % 2;
	
	if (resto == 0) {
		cout<<n<<" É par!"<<endl;
	} else {
		cout<<n<<" É ímpar!";
	}
	
	
	return 0;
}
