#include <iostream>
#include <locale.h>

using namespace std;

struct Carro{
	string modelo;
	int ano;
};

int main(int argc, char** argv) {
	setlocale(LC_ALL,"");
	
	Carro carros[5];
	
	for(int i = 0; i < 5; i++){
		cout<<"Digite o modelo do carro "<<i+1<<": "<<endl;
		cin>>carros[i].modelo;
		cout<<"Digite o ano: "<<endl;
		cin>>carros[i].ano;
	}
	
	for(int i = 0; i < 5; i++){
		cout<<"Carro "<<i+1<<": "<<endl;
		cout<<"Modelo: "<<carros[i].modelo<<endl;
		cout<<"Ano: "<<carros[i].ano<<endl;
		cout<<endl;
	}
	
	return 0;
}
