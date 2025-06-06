#include <iostream>

using namespace std;
/*
Fila Circular – Posto de vacinação com 2 senhas
Enunciado:Um posto de saúde distribui senhas para
vacinação com uma fila circular de 2 posições. Faça um
programa que:
Leia 2 senhas do teclado.
Libere 1 pessoa.
Adicione mais 1 senha e mostre a fila circular.
*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	const int TAM = 2;
	int fila[TAM];
	int inicio = 0;
	int fim = 0;
	int quantTotal = 0;
	int senha;
	
	for (int i = 0; i < TAM; i++)
	{
		cout << "Digite a " << i+1 << " senha:" << endl;
		cin >> senha;
		fila[fim] = senha;
		fim = (fim + 1) % TAM;
		quantTotal++;
	}
	
	system("pause");
	
	cout << "Senha " << fila[inicio] << " liberada!" << endl;
	inicio = (inicio + 1) % TAM;
	quantTotal--;
	
	system("pause");
	
	
	cout << "Digite a senha:" << endl;
	cin >> senha;
	fila[fim] = senha;
	fim = (fim + 1) % TAM;
	quantTotal++;
	
	cout << endl << "Exibindo fila:" << endl;
	for(int i = 0; i < quantTotal; i++)
	{
		cout << fila[(inicio + i) % TAM] << endl;
	}
	
	
	return 0;
}


























