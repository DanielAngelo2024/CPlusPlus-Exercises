#include <iostream>
#include <locale.h>

using namespace std;

/*
1-ler o preço de uma TV 32” e o preço de um DVD
2-Se a soma dos dois aparelhos seja inferior a R$1.300,00, escrever “Promoção”
*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	double prcTV, prcDVD, soma;
	
	cout<<"Digite o preço da TV:"<<endl;
	cout<<"R$";
	cin>>prcTV;
	cout<<"Digite o preço do DVD:"<<endl;
	cout<<"R$";
	cin>>prcDVD;
	
	soma = prcDVD + prcTV;
	
	if (soma < 1300){
		cout<<"Promoção!";
	}
	else {
		cout<<"Sem promoção!";
	}
	
	return 0;
}
