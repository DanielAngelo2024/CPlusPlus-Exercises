#include <iostream>
#include <math.h>
#include <locale.h>
/*ler dois valores num�ricos e apresentar a diferen�a do maior pelo
menor. Se forem iguais apresentar a mensagem: � N�meros iguais�.
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
		cout<<n1<<" � maior que "<<n2<<endl;
		dif = n1 - n2;
		cout<<"Est� a "<<dif<<" de diferen�a."<<endl;
	}
	else if (n2 > n1){
		cout<<n2<<" � maior que "<<n1<<endl;
		dif = n2 - n1;
		cout<<"Est� a "<<dif<< " de diferen�a."<<endl;
	}
	else{
		cout<<"N�meros iguais!";
	}
	
	return 0;
}
