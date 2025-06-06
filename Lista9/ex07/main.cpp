#include <iostream>
#include <locale.h>
#include <string.h>
using namespace std;

int contarVogais(string frase){
	int contador = 0;
	for(int i = 0; i < frase.length(); i++){
		if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'){
			contador++;
		}
	}
	return contador;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	string frase;
	
	cout<<"Digite uma frase:"<<endl;
	getline(cin, frase);
	
	cout<<"Quantidade de vogais: "<<contarVogais(frase);
	
	return 0;
}
