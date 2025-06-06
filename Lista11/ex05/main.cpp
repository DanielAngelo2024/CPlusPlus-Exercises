#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Produto{
	string nome;
	float preco;
};

void exibirProduto(Produto produto){
	cout<<"Nome: "<<produto.nome;
	cout<<"Preco: "<<produto.preco;
}

int main(int argc, char** argv) {
	
	Produto produto;
	
	cout<<"Digite o nome: ";
	cin>>produto.nome;
	cout<<"Digite o preço: ";
	cin>>produto.preco;
	
	exibirProduto(produto);
	
	return 0;
}
