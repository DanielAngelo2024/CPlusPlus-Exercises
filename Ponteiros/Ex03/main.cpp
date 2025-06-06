#include <iostream>
#include<locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
Preenchendo e Exibindo Notas com Ponteiros
Uma professora deseja armazenar as notas de uma prova de cinco
alunos. O programa deve:
1.Solicitar cinco notas ao usuário.
2.Utilizar um ponteiro para armazenar e acessar esses valores.
3.Exibir as notas informadas.
*/

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int notas[5];
	int* ptrNotas = notas;
	
	for(int i = 0; i < 5; i++){
		cout<<"Digite a "<<i+1<<"° nota:"<<endl;
		cin>>ptrNotas[i];
	}
	for(int i = 0; i < 5; i++){
		cout<<"Nota "<<i+1<<": "<<ptrNotas[i]<<endl;
	}
	
	return 0;
}
