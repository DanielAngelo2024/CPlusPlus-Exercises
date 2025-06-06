#include <iostream>
#include <locale>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Produto {
	string nome;
	int quantidade;
	float preco;
	
	void registrarProduto(){
		cout<<"Digite o nome do produto:"<<endl;
		getline(cin>>ws, nome);
		cout<<"Digite a quantidade: "<<endl;
		cin>>quantidade;
		cout<<"Digite o preco:"<<endl;
		cin>>preco;
	}
	
	void exibirInformacoes(){
		cout<<"Produto: "<<nome<<endl;
		cout<<"Quantidade: "<<quantidade<<endl;
		cout<<"Preço: "<<preco<<endl; 
	}
};


void buscarProduto(Produto arrayProdutos[3]){
		string buscaProduto;
		cout<<"Buscar produto: "<<endl;
		getline(cin >> ws, buscaProduto);
		for(int i=0; i < 3; i++){
			if(buscaProduto == arrayProdutos[i].nome){
				cout<<"Produto encontrado!"<<endl;
				cout<<"Produto: "<<arrayProdutos[i].nome<<endl;
				cout<<"Quantidade: "<<arrayProdutos[i].quantidade<<endl;
				cout<<"Preço: "<<arrayProdutos[i].preco;
				return;
			}
		}
	}

int main(int argc, char** argv) {
	setlocale(LC_ALL,"");
	
	Produto produtos[3];
	
	for(int i = 0; i < 3; i++){
		cout<<"Produto "<<i+1<<":"<<endl;
		produtos[i].registrarProduto();
	}
	
	buscarProduto(produtos);
	
	return 0;
}
