#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i, n, d;
	double s;
	string sinal;
	sinal = "+";
	s = 0;
	i = 0;
	n = 6;
	d = 3;
	
	do {
		if (sinal == "+"){
			s -= n / pow(d,2);
			n *= 2;
			d *= 3;
			sinal = "-";
			i++;
		} else if (sinal == "-") {
			s += n / pow(d,2);
			n *= 2;
			d *= 3;
			sinal = "+";
			i++;
		}
		
	} while (i < 15);
	
	cout << "S= " << s << endl;
	
	return 0;
}
