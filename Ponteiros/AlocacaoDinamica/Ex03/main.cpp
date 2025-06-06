#include <iostream>
#include <locale>

/*
	Exerc�cio 3: Matriz Din�mica de Notas
Enunciado: Desenvolva um programa que aloque
dinamicamente uma matriz para armazenar as notas de m
alunos em n disciplinas (tanto m quanto n s�o definidos pelo
usu�rio). Solicite ao usu�rio que insira as notas e, em
seguida, calcule e exiba a m�dia de cada aluno. Libere a
mem�ria alocada.
Detalhes: Aloca��o de um array de ponteiros, cada um
apontando para uma linha da matriz. Desaloca��o em
ordem inversa.
*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int definirTotalAlunos(){
	int quantAlunos;
	std::cout<<"Digite a quantidade de alunos \n";
	std::cin>>quantAlunos;
	return quantAlunos;
}

int definirTotalDisciplinas(){
	int quantDisciplinas;
	std::cout << "Digite a quantidade de disciplinas: \n";
	std::cin >> quantDisciplinas;
	
	return quantDisciplinas;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	float* somaNotas = new float;
	float* media = new float;
	int TOTAL_ALUNOS = definirTotalAlunos();
	float** notas = new float*[TOTAL_ALUNOS];
	int TOTAL_DISCIPLINAS = definirTotalDisciplinas();
	
	
	for(int i = 0; i < TOTAL_ALUNOS; i++){
		notas[i] = new float[TOTAL_DISCIPLINAS];	
	}
	
	for (int i = 0; i < TOTAL_ALUNOS; i++){
		for(int j = 0; j < TOTAL_DISCIPLINAS; j++){
			std::cout<<"Digite a "<<j+1<<"� nota do "<<i+1<<"� aluno:"<<std::endl;
			std::cin>>notas[i][j];
		}
	}	
	
	for (int i = 0; i < TOTAL_ALUNOS; i++)
	{
		for(int j = 0; j < TOTAL_DISCIPLINAS; j++)
		{
			*somaNotas += notas[i][j];
		}
		*media = *somaNotas / TOTAL_DISCIPLINAS;
		*somaNotas = 0;
		std::cout<<"M�dia do aluno " << i + 1 <<": " << *media << std::endl;
	}

	for(int i = 0; i < TOTAL_ALUNOS; i++){
		delete[] notas[i];
	}
	
	delete[] notas;
	notas = nullptr;
	delete somaNotas;
	somaNotas = nullptr;
	delete media;
	media = nullptr;
	
	
	return 0;
}
