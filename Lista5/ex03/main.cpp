#include <iostream>
#include <locale.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int i, n;
	double s;
	n=1;
	
	for (i = 1; i <= 30; i++) {
		
		s += n / pow(i,2);
		n *= 2;
	}
	
	cout << "S="<<s;
	
	return 0;
}
