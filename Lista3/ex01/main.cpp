#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int dia;
	
	cout<<"Digite o n�mero correspondente ao dia da semana 1-Domingo ... 7-S�bado: "<<endl;
	cin>>dia;
	
	switch (dia) {
		case 1:
			cout<<"Domingo"<<endl;
			break;
		case 2:
			cout<<"Segunda"<<endl;
			break;
		case 3:
			cout<<"Ter�a"<<endl;
			break;
		case 4:
			cout<<"Quarta"<<endl;
			break;
		case 5:
			cout<<"Quinta"<<endl;
			break;
		case 6:
			cout<<"Sexta"<<endl;
			break;
		case 7:
			cout<<"S�bado"<<endl;
			break;
			default:
				cout<<"N�mero digitado inv�lido";
	}
	
	return 0;
}
