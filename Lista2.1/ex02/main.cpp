#include <iostream>
#include <windows.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	string dia;
	
	cout<<"Digite o dia da semana:"<<endl;
	cin>>dia;
	
	if (dia == "s�bado" || dia == "domingo") {
		cout<<"� fim de semana!"<<endl;
	}
	else {
		cout<<"Dia �til;";
	}
	
	return 0;
}
