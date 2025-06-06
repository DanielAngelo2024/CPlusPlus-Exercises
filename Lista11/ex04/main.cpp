#include <iostream>
#include <locale.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Pessoa{
	string nome, idade;
	
};

int main(int argc, char** argv) {
	
	Pessoa pessoa1;
	
	cout<<"Digite o nome da pessoa: "<<endl;
	getline(cin, pessoa1.nome);
	cout<<"Digite a idade: "<<endl;
	cin>>pessoa1.idade;
	
	cout<<"Nome: "<<pessoa1.nome<<endl;
	cout<<"Idade: "<<pessoa1.idade;
	
	return 0;
}
