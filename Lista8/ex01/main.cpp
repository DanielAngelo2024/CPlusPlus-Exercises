#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int matrizA[5][5], matrizCubo[5][5];
	
	cout<<"Matriz A: "<<endl;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin>>matrizA[i][j];
		}
	}
	
	cout<<"Matriz com cubo da matriz A: "<<endl;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			matrizCubo[i][j] = pow(matrizA[i][j], 3);
			cout<<matrizCubo[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}
