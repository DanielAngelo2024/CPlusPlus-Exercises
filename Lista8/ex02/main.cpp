#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int matrizA[3][5], matrizB[3][5], somaMatrizes[3][5];
	
	cout<<"Matriz A: "<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 5; j++){
			cin>>matrizA[i][j];
		}
	}
	
	cout<<"Matriz B:"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 5; j++){
			cin>>matrizB[i][j];
		}
	}
	
	cout<<"Soma das matrizes: "<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 5; j++){
			somaMatrizes[i][j] = matrizA[i][j] + matrizB[i][j];
			cout<<somaMatrizes[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}
