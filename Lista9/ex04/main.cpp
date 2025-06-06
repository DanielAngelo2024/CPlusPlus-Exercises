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
	
	cout<<"Digite um n�mero: "<<endl;
	cin>>num;
	
	
	if(ehPrimo(num) == true){
		cout<<num<<" � primo.";
	}else if(ehPrimo(num) == false){
		cout<<num<<" n�o � primo.";
	}

	return 0;
}
