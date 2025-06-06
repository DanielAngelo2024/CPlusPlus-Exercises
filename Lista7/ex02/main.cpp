#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int a[15], b[15];
	
	cout<<"Matriz A: "<<endl;
	for(int i = 0; i < 15; i++){
		cin>>a[i];
	}
	
	cout<<"Matriz B: "<<endl;
	for(int i = 0; i < 15; i++){
		b[i] = a[i]*a[i];
		cout<<" | "<<b[i];
	}
	
	return 0;
}
