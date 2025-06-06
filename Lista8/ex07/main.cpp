#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int matriz[10][10], menorValor;
	menorValor = 9999;
	
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			cin>>matriz[i][j];
			if(matriz[i][j] < menorValor){
				menorValor = matriz[i][j];
				
			}
		}
	}
	
	cout<<"Menor valor: "<<menorValor;
	
	return 0;
}
