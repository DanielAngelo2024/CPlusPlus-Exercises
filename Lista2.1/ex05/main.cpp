#include <iostream>
#include <locale.h>

/*
 ler um n�mero inteiro positivo 
 imprir a mensagem �� Par� se este for par, 
 caso contr�rio, imprimir a mensagem �� �mpar�.

*/


using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int n, resto;
	
	cout<<"Digite um n�mero inteiro positivo:"<<endl;
	cin>>n;
	resto = n % 2;
	
	if (resto == 0) {
		cout<<n<<" � par!"<<endl;
	} else {
		cout<<n<<" � �mpar!";
	}
	
	
	return 0;
}
