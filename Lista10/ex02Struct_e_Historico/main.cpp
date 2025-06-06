#include <iostream>
#include <locale>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Aluno {
	string nome;
	double notas[4], notasDisciplinas[5][5], media;
	
	void adicionarNome(){
		cout<<"Digite o nome do aluno:"<<endl;
		getline(cin>>ws, nome);
	}
	
	void adicionarNotasDasDisciplinas(){
		for(int i=0;i<4;i++){
			for(int j=0;j<3;j++){
				cout<<"Disciplina "<<i+1<<" nota "<<j+1<<":"<<endl;
				notasDisciplinas[i][j];
			}		
		}
	}
	
	
	void adicionarNotas(){
		for (int i=0; i < 4; i++){
			cout<<"Digite a "<<i+1<<"° nota:"<<endl;
			cin>>notas[i];
		}
	}
	
	void exibirNotas(){
		for(int i=0; i < 4; i++){
			cout<<"Nota "<<i+1<<": "<<notas[i]<<endl;
		}
	}
	
	void exibirAluno(){
		cout<<"Nome:"<<nome<<endl;
	}
		
	
};


void exibirAlunos(Aluno alunos[], int totalDeAlunos){
	cout<<totalDeAlunos << " alunos registrados:"<<endl;
	for(int i = 0; i < totalDeAlunos; i++){
		cout<<"Aluno "<<i+1<<":"<<endl;
		alunos[i].exibirAluno();
	}
	
}

int main(int argc, char** argv) {
	setlocale(LC_ALL,"");
	
	char flag;
	const int TOTAL_ALUNOS=50;
	int idA=-1;
	int opcaoMenu;
	
	Aluno alunos[TOTAL_ALUNOS];
	
	do {
		if(idA<0){
			cout<<"Sem alunos, adicione um aluno para começar:"<<endl;
			opcaoMenu = 1;
		} else{
			cout<<"Menu: \n"
			<<"Alunos registrados: "<<idA+1<<endl
			<<"1-Adicionar aluno, 2-Exibir alunos, 3-Exibir histórico"<<endl;
			cin>>opcaoMenu;
		}
		
		switch(opcaoMenu){
			case 1:
				idA++;
				cout<<"Aluno "<<idA+1<<":"<<endl;
				alunos[idA].adicionarNome();
				alunos[idA].adicionarNotasDasDisciplinas();
			break;
			case 2:
				exibirAlunos(alunos, idA+1);
			break;
			default:
				cout<<"Erro! Opção inválida"<<endl;
		} 
		
		
		cout<<"Deseja continuar? s/n"<<endl;
		cin>>flag;
		if(flag != 's'){
			exibirAlunos(alunos, idA+1);
			cout<<"Programa encerrado!";
		}
	} while(flag == 's');
	
	return 0;
}
