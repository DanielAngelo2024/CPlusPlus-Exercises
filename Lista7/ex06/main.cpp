#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int a[5], somaImpar;
	
	for(int i=0; i<5; i++){
		cin>>a[i];
		if(a[i] % 2 == 1){
			somaImpar += a[i];
		}
	}
	cout<<"Soma dos ímpares: "<<somaImpar;
	
	return 0;
}
