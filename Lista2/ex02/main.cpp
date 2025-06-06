#include <iostream>
#include <math.h>
#include <locale.h>
/*ler dois valores numéricos e apresentar a diferença do maior pelo
menor. Se forem iguais apresentar a mensagem: ‘ Números iguais’.
*/
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int n1, n2, dif;
	
	cout<<"Digite o primeiro valor: "<<endl;
	cin>>n1;
	cout<<"Digite o segundo valor:"<<endl;
	cin>>n2;
	
	if (n1 > n2) {
		cout<<n1<<" é maior que "<<n2<<endl;
		dif = n1 - n2;
		cout<<"Está a "<<dif<<" de diferença."<<endl;
	}
	else if (n2 > n1){
		cout<<n2<<" é maior que "<<n1<<endl;
		dif = n2 - n1;
		cout<<"Está a "<<dif<< " de diferença."<<endl;
	}
	else{
		cout<<"Números iguais!";
	}
	
	return 0;
}
