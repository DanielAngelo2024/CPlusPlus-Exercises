#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	double nota, maiorNota, menorNota;
	maiorNota = -9999;
	menorNota = 9999;
	
	for (int i = 1; i <= 10; i++) {
		cout<<"Digite a " << i << "° nota: " << endl;
		cin >> nota;
		
		if (nota > maiorNota) {
			maiorNota = nota;

			
		} else if (nota < menorNota){
			menorNota = nota;
		}
	}
	
	cout<<"Maior nota: " << maiorNota << endl;
	cout<<"Menor nota: " << menorNota<<endl;
	
	return 0;
}
