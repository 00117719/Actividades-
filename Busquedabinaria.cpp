#include <iostream>

using namespace std;

bool bBinaria(int arr[], int low, int high, int x){
    int aux;
    aux = (low+high)/2;

    if(arr[aux]!=x && (low==high)) return false;
    if(arr[aux]==x) return true;
    if(arr[aux]<x) return bBinaria(arr, aux+1, high, x);
    if(arr[aux]>x) return bBinaria(arr, high, aux-1, x);
}

int main(){
    int n, x;
    cout << "Proporcione el tamaño del arreglo"<<endl;
    cin >> n;
    int arr[n-1];

    cout <<"Introduzca elementos en el arreglo"<<endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout <<"Elemento a buscar"<<endl;
    cin >> x;

    if(bBinaria(arr, 0, n-1, x)) cout << "El elemento se encuentra en el arreglo"<<endl;
    else cout << "No se encontro el elemento" <<endl;

    return 0;
}
