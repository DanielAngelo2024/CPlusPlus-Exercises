#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
//gerar numeros aleatorios entre 0 e 200, 250 e 500 e at� o RAND_MAX
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	srand(time(0));
	
	std::cout<<"N�mero aleatorio entre 0 e 200: "<<rand() % 250<<std::endl;
	std::cout<<"N�mero aleatorio entre 250 e 500:"<<rand() % 250 + 250<<std::endl;
	std::cout<<"N�mero aleatorio at� o RAND_MAX:"<<rand() % RAND_MAX;
	
	return 0;
}
