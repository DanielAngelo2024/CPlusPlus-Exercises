#include <iostream>
#include <stack>

using namespace std;
/*
Desfazer a��es de um editor
Simule um programa que empilha a��es e desfaz a
�ltima: Empilhe 3 a��es: "Digitar", "Copiar", "Colar�.
Mostre a �ltima a��o e remova

*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	stack<string> pilhaAcoes;
	
	pilhaAcoes.push("Digitar");
	pilhaAcoes.push("Copiar");
	pilhaAcoes.push("Colar");
	
	cout << "�ltima a��o: " << pilhaAcoes.top() << endl;
	
	pilhaAcoes.pop();
	
	return 0;
}
