#include <iostream>
#include <stack>

using namespace std;

/*
Verificador de palavras palíndromas usando PILHA
Enunciado:
Um palíndromo é uma palavra que lê-se igual de trás para frente, com"arara", "ovo", "radar" etc.
Implemente um programa em C++ que:
• Leia uma palavra digitada pelo usuário
• Armazene seus caracteres em uma pilha
• Inverta a palavra usando a pilha (desempilhando os caracteres)
• Verifique se a palavra original é igual à invertida
• Exiba se é ou não um palíndromo
*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	stack<char> pilhaPalavra;
	string palavra, palavraInvertida;
	
	cout << "Digite uma palavra: ";
	cin >> palavra;
	
	for(int i = 0; i < palavra.size(); i++){
		pilhaPalavra.emplace(palavra[i]);
	}
	
	while (!pilhaPalavra.empty()) { 
        palavraInvertida += pilhaPalavra.top(); 
        pilhaPalavra.pop();
	}
	
	if(palavra == palavraInvertida){
		cout << "É palíndromo!";
	}else{
		cout << "Não é palíndromo!";
	}
	
	
	return 0;
}








