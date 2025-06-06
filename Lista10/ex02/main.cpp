#include <iostream>
#include <locale.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


float mediaNotas(float nota1, float nota2, float nota3, float nota4){
	float media;
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	return media;
}

bool verificarNota(float nota){
	if(nota > 0 && nota < 10){
		return true;
	}
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int op;
	float notas[5][5];

	//Recebe notas em uma matriz
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 4; j++){
			cout<<"Digite a "<<j+1<<"° nota da "<<i+1<<"° disciplina:"<<endl;
			cin>>notas[i][j];
			if(verificarNota(notas[i][j]) == false){
				cout<<"Erro, digite nota entre 0 e 10"<<endl;
				j--;
			}
		}
		notas[i][5] = mediaNotas(notas[i][1],notas[i][2],notas[i][3],notas[i][4]); //Indice J = 5 recebe a media
	}
	
	
	
	for(int i = 0; i < 5; i++){
		cout<<"Disciplina "<<i+1<<endl;
		for(int j = 0; j < 4; j++){
			cout<<"Nota: "<<j+1<<": "<<notas[i][j]<<endl;
			
			
		}
		cout<<"Média: "<<notas[i][5]<<endl;
	}
	
	return 0;
}
