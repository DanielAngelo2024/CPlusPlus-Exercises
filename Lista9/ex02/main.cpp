#include <iostream>
#include <locale.h>

using namespace std;

float celciusParaFahrenheit(int celcius){
	return (celcius * 9/5) + 32;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int celcius;
	float cFahrenheit;
	
	cout<<"Digite a temperatura em Celcius:"<<endl;
	cin>>celcius;
	
	cFahrenheit = celciusParaFahrenheit(celcius);
	
	cout<<"Celcius convertido em Fahrenheit: "<<cFahrenheit; 
	
	return 0;
}
