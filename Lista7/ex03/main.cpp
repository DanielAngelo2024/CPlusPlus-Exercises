#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	
	int a[15], b[15], c[30];
	
	cout<<"A:"<<endl;
	for(int i = 0; i < 15; i++){
		cin>>a[i];
	}
	cout<<endl;
	
	cout<<"B: "<<endl;
	for(int i = 0; i < 15; i++){
		cin>>b[i];
	}
	cout<<endl;
	
	cout<<"C:"<<endl;
	for (int i = 0; i < 30; i++){
		if (i < 15){
			c[i] = a[i];
		} else if (i >= 15){
			c[i] = b[i-15];
		}
		cout<<"|"<<c[i];
	}
	cout<<endl;
	
	
	return 0;
}
