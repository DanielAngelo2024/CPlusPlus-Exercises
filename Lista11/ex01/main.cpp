#include <iostream>
#include <locale.h>

using namespace std;

struct Produto{
	string nome;
	float preco;
	
	void registrarProduto(){
		cout<<"Digite o nome do produto:"<<endl;
		getline(cin, nome);
		cout<<"Digite o preço do produto: "<<endl;
		cin>>preco;
	}
	
	void exibirProduto(){
		cout<<"Produto: "<<nome<<endl;
		cout<<"R$"<<preco;
	}
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"");
	
	Produto produto;
	
	produto.registrarProduto();
	produto.exibirProduto();
	
	/*cout<<"Digite o nome do produto:"<<endl;
	getline(cin, produto.nome);
	cout<<"Digite o preço do produto: "<<endl;
	cin>>produto.preco;*/
	
	/*cout<<"Produto: "<<produto.nome<<endl;
	cout<<"R$"<<produto.preco;*/
	
	
	return 0;
}
