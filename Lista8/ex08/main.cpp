#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	string agenda[10][5];
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 1; j++){
			cout<<i+1<<"° pessoa:"<<endl;
			cout<<"Digite o nome: "<<endl;
			getline(cin, agenda[i][0]);
			cout<<"Digite o endereço:"<<endl;
			getline(cin, agenda[i][1]);
			cout<<"Digite o bairro:"<<endl;
			getline(cin, agenda[i][2]);
			cout<<"Digite o cep:"<<endl;
			getline(cin, agenda[i][3]);
			cout<<"Digite o telefone:"<<endl;
			getline(cin, agenda[i][4]);
		}
	}
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 1; j++){
			cout<<"Nome: "<<agenda[i][0]<<"\t";
			cout<<"Endereço: "<<agenda[i][1]<<"\t";
			cout<<"Bairro: "<<agenda[i][2]<<"\t";
			cout<<"CEP: "<<agenda[i][3]<<"\t";
			cout<<"Telefone: "<<agenda[i][4]<<"\t";
		}
		cout<<endl;
		
	}
	return 0;
}
