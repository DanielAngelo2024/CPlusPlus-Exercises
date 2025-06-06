#include <iostream>
#include <stack>

using namespace std;

/*
Convers�o de base decimal para bin�ria usando pilha
Use uma pilha para converter n�meros inteiros de decimal
para bin�rio.
*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	stack<int> pilhaBinario;
	int numero, quociente, resto;
	
	cout << "Digite o numero para converter em bin�rio: " << endl;
	cin >> numero;
	
	quociente = numero;
	
	while(quociente > 0)
	{
		resto = quociente % 2;
		quociente /= 2;
		pilhaBinario.push(resto);
	}
	
	cout <<numero << " em bin�rio: ";
	while(!pilhaBinario.empty())
	{
		cout <<pilhaBinario.top();
		pilhaBinario.pop();
	}
	
	return 0;
}









