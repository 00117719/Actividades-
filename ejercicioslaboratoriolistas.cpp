#include <iostream>
#include<vector>
#include<cmath>
#include<cstdio>
using namespace std;

struct Tterminox{
    int coeficiente;
    int potencia; 
    
};
typedef Tterminox Terminox;

Terminox solicitarTerminox(){
    
    Terminox a;
    cout<<"Coeficiente:";cin>>a.coeficiente;
    cout<<"Potencia:";cin>>a.potencia;
    return a;
    
}

void mostrarTerminox(Terminox a){
    
    
    cout<<"Coeficiente:"<<a.coeficiente<<endl;
    cout<<"Potencia:"<<a.potencia<<endl;
  
 
}

float mostrarTerminoTerminox(){
    Tterminox b;
    float termino;
      cout<<"Coeficiente:";cin>>b.coeficiente;
    cout<<"Potencia:";cin>>b.potencia;
    termino = pow(b.coeficiente, b.potencia);
    return termino;
}
vector<Terminox> lista;

void agregarTerminox(){
    
    Terminox a= solicitarTerminox();
    bool continuar = true;
    
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), a);
                continuar = false;
            break;
            case 2: lista.push_back(a);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
    
}

void mostrarLista(){
    for (int i = 0; i < lista.size(); i++) 
        mostrarTerminox(lista[i]);
}

int main(){
    
    
    
     cout << "Inicializando..." << endl;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar numero\n\t2) Ver lista de numeros"
            << "\n\t3) Termino  4. Salir\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarTerminox();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: cout<<"Termino"<<endl;
            cout<<mostrarTerminoTerminox();
           
            break;
            case 4: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

   
    return 0;
}



    
    
    
