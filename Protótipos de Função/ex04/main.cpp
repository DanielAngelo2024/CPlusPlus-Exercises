#include <iostream>
#include <locale.h>
#include <math.h> //Biblioteca para usar o valor de PI

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Calcular área do círculo (float areaCirculo(float raio)).

float circulo(float raio);

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
		
	float areaCirculo, raio;
	
	std::cout<<
		"Cálculo área do círculo: \n"
		"Digite o Raio: \n";
	std::cin>>raio;
	
	areaCirculo = circulo(raio);
	
	std::cout<<"A área do circulo é: "<<areaCirculo;
	
	return 0;
}

float circulo(float raio){
	return M_PI * pow(raio, 2);
}
