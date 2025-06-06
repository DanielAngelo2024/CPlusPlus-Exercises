#include <iostream>
#include <math.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

//Ler salário mínimo e salário da pessoa, imprimir quantos salários mínimos ela ganha

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	float minSa, slrPess, quantSlr;
	
	cout<<"Digite o salário mínimo atual: ";
	cin>>minSa;
	cout<<"Digite o salário da pessoa: ";
	cin>>slrPess;
	
	quantSlr = slrPess / minSa;
	
	cout<<"Essa pessoa ganha "<<quantSlr<<" salários.";
	
	return 0;
}
