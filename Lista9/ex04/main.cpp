#include <iostream>
#include <locale.h>

using namespace std;

bool ehPrimo(int numero){
	int contDiv = 0;
	if(numero > 1){
		for(int i = 1; i <= numero; i++){
			if(numero % i == 0){
				contDiv++;
			}
		}
		if(contDiv <= 2){
				return true;
			}else{
				return false;
			}	
	}else{
		return false;
	}
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int num;
	
	cout<<"Digite um número: "<<endl;
	cin>>num;
	
	
	if(ehPrimo(num) == true){
		cout<<num<<" é primo.";
	}else if(ehPrimo(num) == false){
		cout<<num<<" não é primo.";
	}

	return 0;
}
