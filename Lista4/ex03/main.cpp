#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int baseX, alturaY, area, somaAreas, i, quantSup360;
	double mediaAreas;
	
	i = 1;
	somaAreas = 0;
	quantSup360 = 0;
	
	while (i <= 5){
		cout << "--------------"<< i << "° retangulo" << "--------------" << endl;
		cout << "Digite a base (x) do " << i << "° retangulo: " << endl;
		cin >> baseX;
		cout << "Digite a altura (y) do " << i << "° retangulo: " << endl;
		cin >> alturaY;
		

		area = baseX * alturaY;
		somaAreas += area;
	
		if (area > 360){
			quantSup360++;
		}
		
		i++;
	}
	
	mediaAreas = somaAreas / i;
	
	cout << "A média das áreas é de: " << mediaAreas << " metros quadrados." << endl;
	cout << "Terrenos superiores a 360 metros quadrados: " << quantSup360;
	
	return 0;
}
