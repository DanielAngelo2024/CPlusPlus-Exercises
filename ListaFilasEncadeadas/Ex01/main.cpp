#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
1-Pessoa deve conter nome (string), idade (int) e altura (float).
2-O usu�rio cadastra v�rias pessoas, uma por vez, inserindo os dados ao final da lista.
3-Exibir todos os registros ap�s cada insers�o.
4-Remover pessoas informando o nome.
	4.1-Caso o nome exista na lista, o respectivo n� deve ser removido.
	4.2-Caso contr�rio, deve ser exibida uma mensagem informando que o nome n�o foi encontrado.
	4.3-O processo de remo��o pode ser repetido quantas vezes o usu�rio desejar.
5-Ao final de cada remo��o, perguntar se deseja inserir mais pessoas.
	5.1-Caso a resposta seja positiva, o ciclo de inser��o e remo��o se repete.
10-Quando o usu�rio decidir n�o inserir mais dados, exibir a lista final de pessoas e encerrar.

O programa deve utilizar aloca��o din�mica de mem�ria (com new e delete), organiza��o com fun��es
separadas para inser��o, remo��o e exibi��o, e permitir intera��o com o usu�rio por meio de entrada via
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
		cout << nome << " n�o encontrado" << endl;
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
