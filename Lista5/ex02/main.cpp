#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int i, n;
	double s;
	
	n = 1;
	s = 0;
	
	for (i = 1; i <= 50; i++) {
		s += n / i;
		n += 2;
	}
	
	cout << "S=" << s;
	
	return 0;
}
