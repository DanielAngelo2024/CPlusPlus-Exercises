#include <iostream>
#include <math.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

//Ler sal�rio m�nimo e sal�rio da pessoa, imprimir quantos sal�rios m�nimos ela ganha

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	float minSa, slrPess, quantSlr;
	
	cout<<"Digite o sal�rio m�nimo atual: ";
	cin>>minSa;
	cout<<"Digite o sal�rio da pessoa: ";
	cin>>slrPess;
	
	quantSlr = slrPess / minSa;
	
	cout<<"Essa pessoa ganha "<<quantSlr<<" sal�rios.";
	
	return 0;
}
