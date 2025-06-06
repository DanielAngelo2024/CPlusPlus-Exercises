#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int matrizA[5][3], somaPares;
	double mediaPares;
	
	somaPares = 0;
	
	for(int i=0; i<5; i++){
		for(int j=0; j<3; j++){
			cin>>matrizA[i][j];
			if(matrizA[i][j] % 2 == 0){
				somaPares += matrizA[i][j];
			}
		}
	}
	
	mediaPares = somaPares / 15;
	
	cout<<"A média dos pares é: "<<mediaPares;
	
	return 0;
}
