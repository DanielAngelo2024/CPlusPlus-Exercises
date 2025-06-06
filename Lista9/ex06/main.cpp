#include <iostream>

using namespace std;

float calcularIMC(int peso, float altura){
	return peso / (altura * altura);
}

int main(int argc, char** argv) {
	
	int peso;
	float altura, imc;
	
	cout<<"Digite o peso:"<<endl;
	cin>>peso;
	cout<<"Digite a altura:"<<endl;
	cin>>altura;
	
	imc = calcularIMC(peso, altura);
	
	if(imc < 18.5){
		cout<<"Abaixo do peso.";
	}else if(imc >=18.5 && imc <= 24.9){
		cout<<"Normal";
	}else if(imc >= 25 && imc <= 29.9){
		cout<<"Sobrepeso.";
	}else if(imc >= 30 && imc <= 39.9){
		cout<<"Obesidade.";
	}else{
		cout<<"Obesidade grave.";
	}
	
	return 0;
}
