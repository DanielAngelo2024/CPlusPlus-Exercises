#include <iostream>
#include <locale.h>
//Prot�tipo de fun��o que multiplica a por b.
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int multiplicacao(int a, int b);

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, resultado;
	
	std::cout<<
	"Multiplica��o: \n"
	"Digite primeiro n�mero: \n";
	
	std::cin>>a;
	
	std::cout<<
	"Digite o segundo n�mero: \n";
	
	std::cin>>b;
	
	resultado = multiplicacao(a, b);
	
	std::cout<<a<<"*"<<b<<"= "<<resultado;
	
	return 0;
}

int multiplicacao (int a ,int b){
	return a*b;
}
