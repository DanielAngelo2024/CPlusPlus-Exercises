#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int op, estoqueBiscoito, estoqueChocolate, estoquePizza, estoqueRefri, estoqueAgua, estoqueVinho;
	double valorTotal, un;
	
	estoqueBiscoito = 50;
	estoqueChocolate = 30;
	estoquePizza = 80;
	estoqueRefri = 60;
	estoqueAgua = 100;
	estoqueVinho = 19;
	
	cout<<"Menu: "<<endl;
	cout<<"1-Biscoito"<<endl;
	cout<<"2-Chocolate"<<endl;
	cout<<"3-Pizza"<<endl;
	cout<<"4-Refrigerante"<<endl;
	cout<<"5-Água mineral"<<endl;
	cout<<"6-Vinho"<<endl;
	cin>>op;
	
	switch (op){
		case 1:
			cout<<"1-Biscoito"<<endl;
			cout<<"Valor unitário: R$2,50"<<endl;
			cout<<"Estoque: "<<estoqueBiscoito<<" unidades."<<endl;
			cout<<"Quantas unidades deseja?"<<endl;
			cin>>un;
			
			valorTotal = un * 2.50;
			
			cout<<"Total a pagar R$"<<valorTotal<<endl;
			estoqueBiscoito -= un;
			cout<<"Novo estoque: "<<estoqueBiscoito;
 			break;
		case 2:
			cout<<"2-Chocolate"<<endl;
			cout<<"Valor unitário: R$4,20"<<endl;
			cout<<" Estoque: "<<estoqueChocolate<<" unidades."<<endl;
			break;
		case 3:
			cout<<"3-Pizza"<<endl;
			cout<<"Valor unitário: R$25,50"<<endl;
			cout<<"Estoque: "<<estoquePizza<<" unidades."<<endl;
			break;
		case 4:
			cout<<"4-Refrigerante"<<endl;
			cout<<"Valor unitário: R$3,00"<<endl;
			cout<<"Estoque: "<<estoqueRefri<<" unidades."<<endl;
			break;
		case 5:
			cout<<"5-Água mineral"<<endl;
			cout<<"Valor unitário: R$1,80"<<endl;
			cout<<"Estoque: "<<estoqueAgua<<" unidades"<<endl;
			break;
		case 6:
			cout<<"6-Vinho"<<endl;
			cout<<"Valor unitário: R$23,10";
			cout<<"Estoque: "<<estoqueVinho<<" unidades"<<endl;
			break;
		default:
		cout<<"Opção inválida";
	}
	return 0;
}
