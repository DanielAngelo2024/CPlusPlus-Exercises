#include <iostream>
#include <queue>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	string palavra1, palavra2;
	queue<char> filaPalavra1, filaPalavra2;
	
	bool ehAnagrama = false;
	
	cout << "Digite a primeira palavra:" << endl;
	cin >> palavra1;
	cout << "Digite a segunda palavra:" << endl;
	cin >> palavra2;
	
	for(int i = 0; i < palavra1.size(); i++)
	{
		filaPalavra1.push(palavra1[i]);
	}
	for(int i = 0; i < palavra2.size(); i++)
	{
		filaPalavra2.push(palavra2[i]);
	}
	//fato
	//tofa
	
	while(!filaPalavra1.empty()){
		for(int i = filaPalavra1.size(); i >= 0; i--){
			if(filaPalavra1.front() == palavra2[i]){
				ehAnagrama = true;
				break;
			}else{
				ehAnagrama = false;
			}
		}
		
		filaPalavra1.pop();
		
	}
	

	
	
	if(ehAnagrama == true){
		cout << "É anagrama!";
	}else{
		cout << "Não é anagrama!";
	}
	
	
	return 0;
}
