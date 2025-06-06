#include <iostream>
#include <stack>

using namespace std;

/*
Conversão de base decimal para binária usando pilha
Use uma pilha para converter números inteiros de decimal
para binário.
*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	stack<int> pilhaBinario;
	int numero, quociente, resto;
	
	cout << "Digite o numero para converter em binário: " << endl;
	cin >> numero;
	
	quociente = numero;
	
	while(quociente > 0)
	{
		resto = quociente % 2;
		quociente /= 2;
		pilhaBinario.push(resto);
	}
	
	cout <<numero << " em binário: ";
	while(!pilhaBinario.empty())
	{
		cout <<pilhaBinario.top();
		pilhaBinario.pop();
	}
	
	return 0;
}









