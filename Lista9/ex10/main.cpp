#include <iostream>
#include <locale.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool ehFibonacci(int num){
	int f, n;
	f=1;
	for(n=0;n<=num;n=f-n){
		f+=n;
		if(f==num){
			return true;
		}
	}
	return false;
}
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int num;
	
	cout<<"Digite um n�mero: "<<endl;
	cin>>num;
	
	if(ehFibonacci(num)==true){
		cout<<"� fibonacci";
	}else{
		cout<<"N�o � fibonacci";
	}
	
	return 0;
}
