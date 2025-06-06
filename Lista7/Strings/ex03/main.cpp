#include <iostream>
#include <string.h>
#include <locale.h>
#include <ctype.h>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	string frase, fraseMaiuscula;
	cout<<"Digite uma frase: "<<endl;
	getline(cin, frase);
	
	for(int i = 0; i < frase.length(); i++){
		fraseMaiuscula = toupper(frase[i]);
		cout<<fraseMaiuscula;
	}
	
	
	
	return 0;
}
