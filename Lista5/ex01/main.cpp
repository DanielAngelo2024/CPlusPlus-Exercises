#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int i, n, nNeg, nPos, nNull;
	nNeg = 0;
	nPos = 0;
	nNull = 0;
	
	for (i = 1; i <= 10; i++) {
		cout << "Digite o " << i <<"° número inteiro: " << endl;
		cin >> n;
		
		if (n < 0) {
			nNeg++;
		} else if (n > 0) {
			nPos++;
		} else {
			nNull++;
		}		
	}
	
	cout << "Positivos: " << nPos << endl;
	cout << "Negativos: " << nNeg << endl;
	cout << "Nulos: " << nNull << endl;
	
	return 0;
}
