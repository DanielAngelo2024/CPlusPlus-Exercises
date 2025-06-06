#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int a[15], b[15], c[15];
	
	for(int i = 0; i < 15; i++){
		cout<<"A: "<<endl;
		cin>>a[i];
		cout<<"B: "<<endl;
		cin>>b[i];
		
		c[i] = a[i] + b[i];
	}
	
	cout<<"Vetor A: "<<endl;
	for (int i = 0; i < 15; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Vetor B: "<<endl;
	for (int i = 0; i < 15; i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Vetor C: "<<endl;
	for (int i = 0; i<15; i++){
		cout<<c[i]<<" ";
	}
	
	return 0;
}
