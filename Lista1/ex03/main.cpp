#include <iostream>
#include <math.h>
#include <locale.h>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	cout << fixed << setprecision(2);
	
	float raio, area;
	
	cout << "Digite o raio do circulo: ";
	cin >> raio;
	
	area = M_PI * pow(raio, 2);
	
	cout << "A área do círculo é: " << area;
	
	
	return 0;
}
