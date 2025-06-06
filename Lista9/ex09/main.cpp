#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int calcularDeterminante(int matriz[3][3]){
	int multDiagPrinc = matriz[0][0] * matriz[1][1] * matriz[2][2];
	int multiDiagSecund = matriz[0][2] * matriz[1][1] * matriz[2][0];
	
	return multiDiagSecund - multDiagPrinc; 
}

int main(int argc, char** argv) {
	
	int matriz[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Posição "<<i<<", "<<j<<endl;
			cin>>matriz[i][j];
		}
	}
	
	cout<<"Matriz: "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"Determinante: "<<calcularDeterminante(matriz);
	
	return 0;
}
