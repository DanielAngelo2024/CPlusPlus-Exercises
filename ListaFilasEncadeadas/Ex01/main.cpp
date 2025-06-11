#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
1-Pessoa deve conter nome (string), idade (int) e altura (float).
2-O usuário cadastra várias pessoas, uma por vez, inserindo os dados ao final da lista.
3-Exibir todos os registros após cada insersão.
4-Remover pessoas informando o nome.
	4.1-Caso o nome exista na lista, o respectivo nó deve ser removido.
	4.2-Caso contrário, deve ser exibida uma mensagem informando que o nome não foi encontrado.
	4.3-O processo de remoção pode ser repetido quantas vezes o usuário desejar.
5-Ao final de cada remoção, perguntar se deseja inserir mais pessoas.
	5.1-Caso a resposta seja positiva, o ciclo de inserção e remoção se repete.
10-Quando o usuário decidir não inserir mais dados, exibir a lista final de pessoas e encerrar.

O programa deve utilizar alocação dinâmica de memória (com new e delete), organização com funções
separadas para inserção, remoção e exibição, e permitir interação com o usuário por meio de entrada via
teclado.
*/

struct NodePessoa{
	string nome;
	int idade;
	float altura;
	NodePessoa* proximo;
};

void inserirPessoaFinal(NodePessoa*& pessoaHead, string nome, int idade, float altura){
	NodePessoa* novaPessoa = new NodePessoa{nome, idade, altura, nullptr};
	
	if(!pessoaHead){
		pessoaHead = novaPessoa;
		return;
	}
	
	NodePessoa* temp = pessoaHead;
	while(temp->proximo){
		temp = temp->proximo;
	}
	temp->proximo = novaPessoa;
}

void exibirNodePessoas(NodePessoa* pessoaHead){
	int id = 1;
	while(pessoaHead){
		cout << "<--------------Pessoa: "<< id <<"------------------->" << endl;
		cout << "Nome: " << pessoaHead->nome << endl;
		cout << "Idade: " << pessoaHead->idade << endl;
		cout << "Altura: " << pessoaHead->altura << endl;
		id++;
		pessoaHead = pessoaHead->proximo;
	}
	cout << "<--------------------------------------------------->" << endl;
}

void removerNodePessoa(NodePessoa*& pessoaHead, string nome){
	if(!pessoaHead) return;
	
	if(pessoaHead->nome == nome){
		NodePessoa* temp = pessoaHead;
		pessoaHead = pessoaHead->proximo;
		delete temp;
		cout << nome << " removido da lista."<<endl;
		return;
	}
	
	NodePessoa* pessoaAtual = pessoaHead;
	while(pessoaAtual->proximo && pessoaAtual->proximo->nome != nome){
		pessoaAtual = pessoaAtual->proximo;
	}
	
	if(pessoaAtual->proximo){
		NodePessoa* temp = pessoaAtual->proximo;
		pessoaAtual->proximo = temp->proximo;
		delete temp;
		cout << nome << " removido da lista." << endl;
	}else{
		cout << nome << " não encontrado" << endl;
	}
}

int main(int argc, char** argv) {
	NodePessoa* pessoas = nullptr;
	string resposta;
	string nome;
	int idade;
	float altura;
	
	do{
		while(true){
			cout << "Adicione pessoas aqui, digite -1 no nome para parar." << endl;
			cout << "Digite o nome:" << endl;
			cin >> nome;
			if(nome == "-1") break;
			cout << "Digite a idade:" << endl;
			cin >> idade;
			cout << "Digite a altura:" << endl;
			cin >> altura;
			
			inserirPessoaFinal(pessoas, nome, idade, altura);
		}
		exibirNodePessoas(pessoas);
		
		cout << "Deseja remover alguma pessoa?" << endl;
		cin>>resposta;
		while(resposta == "s" || resposta == "S"){
			cout << "Informe o nome da pessoa a ser removida:" << endl;
			cin >> nome;
			removerNodePessoa(pessoas, nome);
			exibirNodePessoas(pessoas);
			cout << "Deseja remover outra pessoa?" << endl;
			cin >> resposta;
		}
		
		cout << "Deseja adicionar uma nova pessoa (S/N)?" << endl;
		cin >> resposta;
	}while(resposta == "s" || resposta == "S");
	
	
	delete pessoas;
	
	return 0;
}
