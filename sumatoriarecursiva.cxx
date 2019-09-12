#include <iostream>
#include <cmath>
using namespace std;



	long double valoraproximado(int a, long double suma){
	if (a==0){
		
		return suma;
	}
	else {
		return suma+(pow(-1, a+1))/((2*a-1))+ valoraproximado(a-1,suma);
		
	}
	
}

int main(void){
	
	int a=0;
	cout<<"¿Hasta cuanto quiere que llegue la.sumatoria?";
	cin>>a;
	
	cout<<4*valoraproximado(a,0);
	return 0;
}
	
	