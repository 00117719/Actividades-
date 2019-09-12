
#include <iostream>
using namespace std;

void numNaturales(int a, int b);
int main(){
	
	int a, b=0;
	
	cout<<"Digite el valor de a"<<endl;
	cin>>a;
	cout<<"Digite el valor de b"<<endl;
	cin>>b;
	
	cout<<"La lista de numeros naturales entre"<<a<<"y"<<b<<"es:"<<endl;
	numNaturales(a,b);
	
	return 0;

}

void numNaturales(int a, int b){
	
	if(a<(b-1)){
		cout<<++a<<" ";
		numNaturales(a,b);
		
	}
	
	if(b<(a-1)){
		cout<<++b<<" ";
		numNaturales(a,b);
		
	}
}
		
		
		