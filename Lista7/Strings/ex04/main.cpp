#include <iostream>
#include <ctype.h>
#include <locale.h>
#include <string.h>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	string frase, fraseMinuscula;
	
	cout<<"Digite uma frase: "<<endl;
	getline(cin, frase);
	
	for(int i = 0; i < frase.length(); i++){
		fraseMinuscula = tolower(frase[i]);
		cout<<fraseMinuscula;
	}
	
	return 0;
}
