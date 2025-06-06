#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	float nota, menorNota, notaI;
	menorNota = 999999999;
	
	for (int i = 1; i <= 10; i++){
		cout << "Digite a " << i <<"° nota: " <<endl;
		cin >> nota;
		
		if (nota >= 0 && nota <=10){
			if (nota < menorNota) {
			menorNota = nota;
			notaI = i;
			
			} 
		}else {
			cout<<"Nota precisa ser maior que 0 e menor que 11."<<endl;
		}
		
	}
	
	cout<<"A menor nota foi de " << menorNota << " de posição " << notaI;
	
	return 0;
}
