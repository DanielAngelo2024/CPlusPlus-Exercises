#include <iostream>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Escrever um programa que leia tr�s notas, calcular e imprimir a m�dia.

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "");
	int n1, n2, n3, soma;
	float media;
	
	cout<<"Digite a primeira nota: ";
	cin>>n1;
	cout<<"Digite a segunda nota: ";
	cin>>n2;
	cout<<"Digite a terceira nota: ";
	cin>>n3;
	
	soma=n1+n2+n3;
	media=soma/3;
	
	cout<<"A m�dia de "<<n1<< " + "<<n2<<" + "<<n3<<" �: "<<media<<endl;
	
	return 0;
}
