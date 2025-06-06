#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int mat[4][4], soma;
	double media;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			cin>>mat[i][j];
		}
	}
	
	for (int i = 0; i<4; i++){
		for(int j=0; j<4; j++){
			soma += mat[i][j];
		}
	}
	
	media = soma / 16;
	
	cout<<"A média é de: "<<media;
	
	return 0;
}
