#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Ler idade, altura, nome de 10 pessoas, utilizando vetores, protótipos e funções, 
//Calcular e exibir o nome e idade da pessoa mais velha e da mais nova

void calculoMaiorIdade(std::string nomes[], int idades[], float alturas[]);
void calculoMenorIdade(std::string nomes[], int idades[], float alturas[]);
 
int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	std::string nomes[10];
	int idades[10];
	float alturas[10];
	
	for(int i = 0; i < 3; i++){
		std::cout<<"Digite o nome:"<<std::endl;
		std::cin>>nomes[i];
		std::cout<<"Digite a idade:"<<std::endl;
		std::cin>>idades[i];
		std::cout<<"Digite a altura:"<<std::endl;
		std::cin>>alturas[i];
	}
	
	calculoMaiorIdade(nomes, idades, alturas);
	calculoMenorIdade(nomes, idades, alturas);	
	
	return 0;
}

void calculoMaiorIdade(std::string nomes[], int idades[], float alturas[]){
	int maiorIdade = -9999;
	std::string nomeMaiorIdade;
	float alturaMaiorIdade;
	
	for(int i = 0;i < 3;i++) {
		if(idades[i] > maiorIdade){
			maiorIdade = idades[i];
			nomeMaiorIdade = nomes[i];
			alturaMaiorIdade = alturas[i];
		}
	}
	
	std::cout<<"Maior Idade: "<<maiorIdade<<" nome: "<<nomeMaiorIdade<<" altura: "<<alturaMaiorIdade<<std::endl;
}

void calculoMenorIdade(std::string nomes[], int idades[], float alturas[]){
	int menorIdade = 9999;
	std::string nomeMenorIdade;
	float alturaMenorIdade;
	
	for(int i = 0;i < 3;i++) {
		if(idades[i] < menorIdade){
			menorIdade = idades[i];
			nomeMenorIdade = nomes[i];
			alturaMenorIdade = alturas[i];
		}
	}
	
	std::cout<<"Menor Idade: "<<menorIdade<<" nome: "<<nomeMenorIdade<<" altura: "<<alturaMenorIdade<<std::endl;

}

