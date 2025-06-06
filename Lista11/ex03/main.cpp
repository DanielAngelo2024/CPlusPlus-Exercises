#include <iostream>
#include <locale.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Carro{
	string modelo;
	int ano;
	
	void registrarCarro(){
		cout<<"Digite o modelo: ";
		getline(cin, modelo);
		cout<<"Digite o ano: ";
		cin>>ano;
	}
	
	void exibirCarro(){
		cout<<"Modelo: "<<modelo<<endl;
		cout<<"Ano: "<<ano;
	}
	
};

int main(int argc, char** argv) {
	setlocale(LC_ALL,"");
	
	Carro carro;
	carro.registrarCarro();
	carro.exibirCarro();
	
	return 0;
}
