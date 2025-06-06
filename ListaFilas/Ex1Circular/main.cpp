#include <iostream>

using namespace std;

/*
Fila Circular – Armazém com 3 caixas
Enunciado: Um armazém tem 3 caixas para empacotar
produtos. Quando todas estão cheias e uma é liberada, a
próxima caixa disponível é usada no formato circular.

Inserir 3 códigos de produto, 3 caixas, ou seja fila circular tam 3
Liberar 1 caixa, ou seja, tirar ultimo produto da fila e colocar a caixa para o final
Insirir mais 1 produto e exibir a fila circular.
*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	const int TAM = 3;
	string fila[TAM];
	int inicio = 0;
	int fim = 0;
	int quantProdutos = 0;
	
	fila[fim] = "codigo001";
	fim = (fim + 1) % TAM;
	quantProdutos++;
	
	fila[fim] = "codigo002";
	fim = (fim + 1) % TAM;
	quantProdutos++;
	
	fila[fim] = "codigo003";
	fim = (fim + 1) % TAM;
	quantProdutos++;
	
	inicio = (inicio + 1) % TAM;
	quantProdutos--;
	cout << "Caixa liberada!" << endl;
	
	fila[fim] = "codigo004";
	fim = (fim + 1) % TAM;
	quantProdutos++;
	
	cout << "Exibindo fila circular: " << endl;
	for(int i = 0; i < quantProdutos; i++)
	{
		cout << fila[(inicio + i) % TAM] << endl;
	}
	
	
	
	
	return 0;
}

































