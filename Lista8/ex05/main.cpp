#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int matrizA[4][5], somaLinha, somaElementos;
	somaElementos = 0;
	for(int i=0; i<4; i++){
		for(int j=0; j<5; j++){
			cin>>matrizA[i][j];
		}
	}
	
	for(int i=0; i<4; i++){
		somaLinha = 0;
		for(int j=0; j<5; j++){
			somaLinha += matrizA[i][j];
			somaElementos += matrizA[i][j]; 
		}
		cout<<"Soma da linha "<< i<<": "<<somaLinha<<endl;
	}
	
	cout<<"Soma dos elementos: "<<somaElementos<<endl;
	
	return 0;
}
