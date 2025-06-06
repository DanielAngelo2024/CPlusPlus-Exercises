#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	string nome, sobrenome, nomeCompleto;
	
	cout<<"Digite o nome: "<<endl;
	cin>>nome;
	cout<<"Digite o sobrenome: "<<endl;
	cin>>sobrenome;
	
	nomeCompleto = nome + " " + sobrenome;
	
	cout<<"Nome completo: "<<nomeCompleto;
	
	
	return 0;
}
