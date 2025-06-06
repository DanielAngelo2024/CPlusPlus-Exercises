#include <iostream>
#include <stack>

using namespace std;

/*
Verificador de palavras pal�ndromas usando PILHA
Enunciado:
Um pal�ndromo � uma palavra que l�-se igual de tr�s para frente, com"arara", "ovo", "radar" etc.
Implemente um programa em C++ que:
� Leia uma palavra digitada pelo usu�rio
� Armazene seus caracteres em uma pilha
� Inverta a palavra usando a pilha (desempilhando os caracteres)
� Verifique se a palavra original � igual � invertida
� Exiba se � ou n�o um pal�ndromo
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
		cout << "� pal�ndromo!";
	}else{
		cout << "N�o � pal�ndromo!";
	}
	
	
	return 0;
}








