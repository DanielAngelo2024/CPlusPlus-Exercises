#include <iostream>

#include <locale>
/*
Exercício 4: Struct com Alocação Dinâmica
Enunciado: Defina uma struct Aluno contendo nome (string
alocada dinamicamente) e nota (float). Crie um programa
que aloque dinamicamente um array de structs Aluno para k
alunos (definido pelo usuário). Solicite ao usuário que insira
o nome e a nota de cada aluno. Exiba os dados de cada
aluno e libere a memória.
Detalhes: Alocar memória para a struct Aluno e para a string
nome dentro da struct.
*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Aluno {
	std::string nome;
	float nota;
	
	void cadastrarNome(){
		std::cout << "Digite o nome:"<<std::endl;
		std::cin >> nome;
	}
	
	void inserirNota(){
		std::cout << "Digite a nota:"<<std::endl;
		std::cin >> nota;
	}
	
	void exibirDados(){
		std::cout << "Nome: " << nome << std::endl;
		std:: cout << "Nota: " << nota << std::endl;
	}
	
};

int definirQuantAlunos(){
	int totalAlunos;
	std::cout << "Digite a quantidade de alunos: \n";
	std::cin >> totalAlunos;
	std::cout<<std::endl;
	
	return totalAlunos;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int TOTAL_ALUNOS = definirQuantAlunos();
	Aluno* alunos = new Aluno[TOTAL_ALUNOS];
	
	for(int i = 0; i < TOTAL_ALUNOS; i++){
		std::cout << "Aluno " << i + 1 <<": \n";
		alunos[i].cadastrarNome();
		alunos[i].inserirNota();
		std::cout<<std::endl;
	}
	
	std::cout<<"Exibindo Alunos: \n";
	for(int i = 0; i < TOTAL_ALUNOS; i++){
		std::cout << "Aluno " << i + 1 <<": \n";
		alunos[i].exibirDados();
		std::cout<<std::endl;

	}
	
	return 0;
}
