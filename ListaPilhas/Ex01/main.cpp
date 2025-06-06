#include <iostream>
#include <stack>

using namespace std;
/*
Desfazer ações de um editor
Simule um programa que empilha ações e desfaz a
última: Empilhe 3 ações: "Digitar", "Copiar", "Colar“.
Mostre a última ação e remova

*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	stack<string> pilhaAcoes;
	
	pilhaAcoes.push("Digitar");
	pilhaAcoes.push("Copiar");
	pilhaAcoes.push("Colar");
	
	cout << "Última ação: " << pilhaAcoes.top() << endl;
	
	pilhaAcoes.pop();
	
	return 0;
}
