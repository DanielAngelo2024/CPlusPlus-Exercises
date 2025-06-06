#include <iostream>
#include <locale.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float circulo(float raio = 2);

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
		
	float areaCirculo;
	
	std::cout<<"Cálculo área do círculo: \n";
	
	areaCirculo = circulo();
	
	std::cout<<"A área do circulo é: "<<areaCirculo;
	return 0;
}

float circulo(float raio){
	return M_PI * pow(raio, 2);
}
