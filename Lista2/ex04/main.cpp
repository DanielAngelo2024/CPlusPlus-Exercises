#include <iostream>
#include <locale.h>

using namespace std;

/*
1-Ler o ano de nascimento de uma pessoa 
2-Imprimir a idade desta pessoa
3-verificar se sua idade está entre 18 (inclusive) e 65 anos (inclusive).
4-Caso esteja, imprimir a mensagem “A idade está no intervalo”.
*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	
	int anoNasc, idade;
	
	cout<<"Digite o ano de nascimento da pessoa:"<<endl;
	cin>>anoNasc;
	
	idade = 2012 - anoNasc;
	
	cout<<"A pessoa tem "<<idade<<" anos."<<endl;
	
	if (idade >= 18 && idade <= 65) {
		cout<<"A idade está no intervalo!"<<endl;
	}
	
	
	return 0;
}
