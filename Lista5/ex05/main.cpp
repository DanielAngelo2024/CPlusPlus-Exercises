#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int i, num, quant50e500, maiorNum;
	
	maiorNum = -99999;
	quant50e500 = 0;
	
	for (i = 1; i <= 10; i++) {
		cout << "Digite um número inteiro e positivo: " << endl;
		cin >> num;
		
		if (num >= 50 && num <= 500){
			quant50e500++;
		}
		
		if (num > maiorNum) {
			maiorNum = num;
		}
	}
	
	cout << "O maior número foi: " << maiorNum << endl;
	cout << "Quantidade de números entre 50 e 500: " << quant50e500;
	
	
	return 0;
}
