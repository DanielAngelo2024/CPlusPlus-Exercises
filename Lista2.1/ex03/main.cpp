#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
/*
1-Ler a idade de uma pessoa
2-imprimir a mensagem �voc� � de maior� se ela tiver 18 anos ou mais 
3-Mensagem �voc� � de menor� caso tenha menos de 18 anos.
*/

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	cout<<"Digite a idade da pessoa:"<<endl;
	cin>>idade;
	
	if (idade >= 18){
		cout<<"Voc� � de maior.";
	}
	else {
		cout<<"Voc� � de menor.";
	}
	
	return 0;
}
