#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
1-Criar uma lista encadeada para armazenar pessoas (com nome, idade, altura).
2-Cadastrar 3 pessoas (dados fornecidos pelo usuário).
3-Remover uma pessoa por nome.
4-Exibir a lista após cada operação.
*/

struct NodePessoa{
	string nome;
	int idade;
	float altura;
	NodePessoa* proximo;
};

void inserirPessoaFinal(NodePessoa*& cabecaPessoa, string nome, int idade, float altura){
	NodePessoa* novoPessoa = new NodePessoa{nome, idade, altura, nullptr};
	
	if(cabecaPessoa == nullptr){
		cabecaPessoa = novoPessoa;
		return;
	}
	
	NodePessoa* temp = cabecaPessoa;
	while(temp->proximo != nullptr){
		temp = temp->proximo;
	}
	temp->proximo = novoPessoa;
	
}

void exibirListaPessoa(NodePessoa* cabecaPessoa){
	while(cabecaPessoa != nullptr){
		cout << "Nome: " << cabecaPessoa->nome << endl;
		cout << "Idade: " << cabecaPessoa->idade << endl;
		cout << "Altura: " << cabecaPessoa->altura << endl;
		cout << "<------------------------------------>"<<endl;
		cabecaPessoa = cabecaPessoa->proximo;
	}
}

void removerPessoa(NodePessoa*& cabecaPessoa, string nome){
	if(cabecaPessoa == nullptr) return;
	if(cabecaPessoa->nome == nome){
		NodePessoa* temp = cabecaPessoa;
		cabecaPessoa = cabecaPessoa->proximo;
		delete temp;
		cout << nome << " removido"<<endl;
		return;
	}
	
	NodePessoa* atual = cabecaPessoa;
	while(atual->proximo && atual->proximo->nome != nome){
		atual = atual->proximo;
	}
	
	if(atual->proximo != nullptr){
		NodePessoa* temp = atual->proximo;
		atual->proximo = temp->proximo;
		delete temp;
		cout<<nome<<" removido"<<endl;
	}else{
		cout<<nome<<" não encontrado na lista"<<endl;
	}
}

int main(int argc, char** argv) {
	NodePessoa* listaPessoas = nullptr;
	string nome;
	int idade;
	float altura;
	
	for(int i = 0; i < 3; i++){
		cout << "Digite o nome:" << endl;
		cin >> nome;
		cout << "Digite a idade:" << endl;
		cin >> idade;
		cout << "Digite a altura:" << endl;
		cin >> altura;
		inserirPessoaFinal(listaPessoas, nome, idade, altura);
	}
	
	cout<<"<----Exibindo lista---->"<<endl;
	exibirListaPessoa(listaPessoas);
	
	cout << "Digite o nome para remover:" << endl;
	cin >> nome;
	removerPessoa(listaPessoas, nome);
	
	cout<<"<-----Exibindo lista atual----->"<<endl;
	exibirListaPessoa(listaPessoas);
	
	delete listaPessoas;
	listaPessoas = nullptr;
	
	return 0;
}














