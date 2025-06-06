#include <iostream>
#include <locale.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Retangulo {
	int altura;
	int largura;
	
	void getAlturaLargura(){
		cout<<"Digite a altura: ";
		cin>>altura;
		cout<<"DIgite a largura: ";
		cin>>largura;
	}
	
	int calcularArea(int altura, int largura){
		return altura * largura;
	}
	
	void exibirArea(){
		int area = calcularArea(altura, largura);
		cout<<"A área do retangulo é: "<<area;
	}
};

int main(int argc, char** argv) {
	setlocale(LC_ALL,"");
	
	Retangulo retangulo;
	
	retangulo.getAlturaLargura();
	retangulo.exibirArea();
	
	return 0;
}
