#include <iostream>
#include <locale.h>

using namespace std;

/*
1-ler o pre�o de uma TV 32� e o pre�o de um DVD
2-Se a soma dos dois aparelhos seja inferior a R$1.300,00, escrever �Promo��o�
*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	double prcTV, prcDVD, soma;
	
	cout<<"Digite o pre�o da TV:"<<endl;
	cout<<"R$";
	cin>>prcTV;
	cout<<"Digite o pre�o do DVD:"<<endl;
	cout<<"R$";
	cin>>prcDVD;
	
	soma = prcDVD + prcTV;
	
	if (soma < 1300){
		cout<<"Promo��o!";
	}
	else {
		cout<<"Sem promo��o!";
	}
	
	return 0;
}
