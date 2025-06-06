#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int matriz[10][10], maiorValor;
	maiorValor = -9999;
	
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			cin>>matriz[i][j];
			if(matriz[i][j] > maiorValor){
				maiorValor = matriz[i][j];
				
			}
		}
	}
	
	cout<<"Maior valor: "<<maiorValor;
	
	return 0;
}
