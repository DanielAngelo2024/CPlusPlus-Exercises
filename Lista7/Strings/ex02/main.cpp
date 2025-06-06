#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL,"");
	
	string primeiroNome, segundoNome;
	
	cout<<"Digite o primeiro nome: "<<endl;
	cin>>primeiroNome;
	cout<<"Digite o segundo nome: "<<endl;
	cin>>segundoNome;
	
	if(primeiroNome == segundoNome){
		cout<<"Nomes iguais"<<endl;
	} else {
		cout<<"Nomes diferentes"<<endl;
	}
	
	cout<<"Caracteres do primeiro nome: "<<primeiroNome.length()<<endl;
	cout<<"Caracteres do segundo nome: "<<segundoNome.length();
	
	return 0;
}
