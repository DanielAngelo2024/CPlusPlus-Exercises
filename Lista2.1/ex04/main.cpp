#include <iostream>
#include <locale.h>
#include <string>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	string letra;
	
	
	cout<<"Digite uma letra:"<<endl;
	cin>>letra;
	
	
	if (letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u"){
		cout<<"É uma vogal!";
	}else if (letra.size() >= 2) {
		cout<<"Erro, digite uma letra!";
	}
	else {
		cout<<"É uma consoante";
	}
	
	return 0;
}
