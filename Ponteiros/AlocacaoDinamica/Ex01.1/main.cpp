#include <iostream>
#include <locale>

/*
Exerc�cio 1: M�dia das Alturas (Aloca��o B�sica)
Enunciado: Crie um programa que aloque dinamicamente
mem�ria para armazenar a altura de 10 pessoas. Solicite
ao usu�rio que insira as alturas, calcule a m�dia e exiba o
resultado. Libere a mem�ria alocada ao final.
Detalhes: Usar new e delete para aloca��o e desaloca��o
*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void inserirAlturas(int alturas[]);
int inserirAltura(int i);
float mediaAlturas(int alturas[]);


int main(int argc, char** argv) 
{
	setlocale(LC_ALL, "Portuguese");
	
	int* alturas = new int[10];
	float* media = new float;
	
	inserirAlturas(alturas);
	*media = mediaAlturas(alturas);
	
	std::cout<<"A m�dia de altura � de "<<*media<<" cm";
	
	delete media;
	media = nullptr;
	delete[] alturas;
	alturas = nullptr;
	
	return 0;
}

int inserirAltura(int i)
{
	int altura;
	std::cout << "Digite a " << i + 1 <<"� altura: \n";
	std::cout <<"cm: ";
	std::cin >> altura;
	
	
	return altura; 
}

void inserirAlturas(int alturas[])
{
	for (int i = 0; i < 10;i++)
	{
		alturas[i] = inserirAltura(i);	
	}

}

float mediaAlturas(int alturas[])
{
	int soma = 0;
	float media;

	for (int i = 0; i < 10; i++)
	{
		soma += alturas[i];
	}
	
	media = soma / 10;
	return media;
}



