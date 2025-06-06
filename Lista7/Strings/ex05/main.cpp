#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	string nomeA, nomeB, aux;
	cout<<"Nome A: "<<endl;
	getline(cin, nomeA);
	cout<<"Nome B: "<<endl;
	getline(cin, nomeB);
	
	cout<<"Antes da troca: "<<endl;
	cout<<"Nome A: "<<nomeA<<endl;
	cout<<"Nome B: "<<nomeB<<endl;
	
	cout<<"Trocando.."<<endl;
	
	aux = nomeA;
	nomeA = nomeB;
	nomeB = aux;
	
	cout<<"Strings trocadas!"<<endl;
	cout<<"Nome A: "<<nomeA<<endl;
	cout<<"Nome B: "<<nomeB<<endl;
	
	return 0;
}
