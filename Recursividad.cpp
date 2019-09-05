
//Herson Alexander Reyes Rivas 00216519
//Alberto Jos'e Marroquin Mendoza 00117719


#include <iostream>
using namespace std;

int mult(int a,int b)
{
if(b ==1){
	
	cout<<"n="<<b<<"caso base"<<endl;
	return a;
}
else{
	return  a+mult(a, b-1);
}
}
int main(){

	cout<<"Multiplicacion de 6x5"<<endl;
	int resultado=mult(6,5);
	cout<<"resultado"<<resultado<<endl;
	
}