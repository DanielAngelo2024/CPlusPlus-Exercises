#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	double notas[40];
	int acimaMedia;
	acimaMedia = 0;
	
	for (int i = 1; i <= 40; i++){
		cout<<"Digite a "<<i<<"° nota:"<<endl;
		cin>>notas[i];
		
		if (notas[i] >= 6){
			acimaMedia++;
		}
	}
	
	cout<<"Notas acima da média: "<<acimaMedia;
	
	return 0;
}
