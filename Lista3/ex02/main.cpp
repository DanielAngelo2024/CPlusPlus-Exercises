#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int mes;
	
	cout<<"Digite o número correspondente ao mês do ano, 1-janeiro ... 12-Dezembro:"<<endl;
	cin>>mes;
	
	switch (mes){
		case 1:
			cout<<"Janeiro";
			break;
		case 2:
			cout<<"Fevereiro";
			break;
		case 3:
			cout<<"Março";
			break;
		case 4:
			cout<<"Abril";
			break;
		case 5:
			cout<<"Maio";
			break;
		case 6:
			cout<<"Junho";
			break;
		case 7:
			cout<<"Julho";
			break;
		case 8:
			cout<<"Agosto";
			break;
		case 9:
			cout<<"Setembro";
			break;
		case 10:
			cout<<"Outubro";
			break;
		case 11:
			cout<<"Novembro";
			break;
		case 12:
			cout<<"Dezembro";
			break;
		default:
			cout<<"Dia do Mês inválido";
	}
	return 0;
}
