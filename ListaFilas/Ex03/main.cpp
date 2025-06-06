#include <iostream>
#include <queue>

using namespace std;

struct Usuario{
	string pedido1;
	string pedido2;
};

/*
Inserção de 2 pedidos do usuário.
Verificação se a fila está vazia.
Exibição do último pedido da fila.
*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	Usuario usuario;
	queue<Usuario> filaPedidos;
	char op;
	
	do{
		cout << "<-----Usuário " << filaPedidos.size() + 1 << ":----->" << endl;
		cout << "Pedido 1: " << endl;
		cin >> usuario.pedido1;
		cout << "Pedido 2: " << endl;
		cin >> usuario.pedido2;
		
		filaPedidos.push(usuario);
		
		cout << "Novo pedido? (s/n) " << endl;
		cin >> op;
	}while(op == 's');
	
	if(!filaPedidos.empty()){
		cout << "Fila esta cheia. Iniciando atendimento da fila..." << endl;
		
	}else{
		cout << "Fila esta vazia." << endl;
	}
	
	Usuario proximoUsuario;
	
	while(!filaPedidos.empty())
	{
		cout << "Atendendo o próximo usuário: " << endl;
		proximoUsuario = filaPedidos.front();
		cout << "Pedido 1: " << proximoUsuario.pedido1 << endl;
		cout << "Pedido 2: " << proximoUsuario.pedido2 << endl;
		
		system("pause");
		
		filaPedidos.pop();
		
		if(!filaPedidos.empty()){
			cout << "Fila esta cheia. Atendendo..." << endl;
		
		}else{
			cout << "Fila esta vazia. Encerrando." << endl;
		}
		
	}
	
	return 0;
}
