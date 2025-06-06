#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int a[10], b[10];
	
	cout<<"A: "<<endl;
	for (int i = 0; i < 10; i++){
		cin>>a[i];
	}
	
	for(int i = 0; i < 10; i++){
		if (i % 2 == 0){
			b[i] = a[i] * 5;
		} else{
			b[i] = a[i] + 5; 
		}
		cout<<"|"<<b[i];
		
	}
	
	return 0;
}
