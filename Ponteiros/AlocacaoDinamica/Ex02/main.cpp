#include <iostream>
#include <locale>

/*
	Enunciado: Implemente um programa que aloque
dinamicamente um vetor para armazenar n números
inteiros (onde n é definido pelo usuário). Peça ao usuário
para inserir os números, em seguida, calcule e exiba a
soma dos elementos no vetor. Libere a memória após o
uso.
Detalhes: Alocar um array usando new int[n] e liberar
com delete[].
*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int definirTamanhoDoVetor();
void armazenarNumeros(int numeros[], int TAMANHO_VETOR);
int somatorio(int numeros[], int TAMANHO_VETOR);
void realizarSomatorio(int numeros[], int tamanhoVetor);


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int TAMANHO_VETOR = definirTamanhoDoVetor();
	int* numeros = new int[TAMANHO_VETOR];
	
	realizarSomatorio(numeros, TAMANHO_VETOR);
	
	delete[] numeros;
	numeros = nullptr;

	return 0;
}

int definirTamanhoDoVetor()
{
	int TAMANHO_VETOR;
	std::cout<<"Digite a quantidade de números a armazenar: \n";
	std::cin >> TAMANHO_VETOR;	
	
	return TAMANHO_VETOR;
}

void armazenarNumeros(int numeros[], int TAMANHO_VETOR)
{
	for (int i = 0; i < TAMANHO_VETOR; i++)
	{
		std::cout << "Digite o " << i + 1 << "° número: \n";
		std::cin >> numeros[i];
	}
}

int somatorio(int numeros[], int TAMANHO_VETOR)
{
	int soma = 0;
	for (int i = 0; i < TAMANHO_VETOR; i++)
	{
		soma += numeros[i];
	}
	return soma;
}

void realizarSomatorio(int numeros[], int tamanhoVetor){
	armazenarNumeros(numeros, tamanhoVetor);
	int soma = somatorio(numeros, tamanhoVetor);
	
	std::cout<<"Somatorio: "<<soma;
}
