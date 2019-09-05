#include <cstdlib>
#include <iostream>
using namespace std;


struct  continente1{
char capital[20];
char nombre[20];
};


struct  continente2{
char capital[5];
char nombre[5];
};

struct  continente3{
char capital[5];
char nombre[5];
};

struct  continente4{
char capital[5];
char nombre[5];
};

struct  continente5{
char capital[5];
char nombre[5];
};
int main (){
    cout<<"AL INGRESAR LOS NOMBRES NO DEJAR ESPACIOS"<<endl;
    continente1 uno[5];
    double habitantes[5];
    double totalhabitantes=0;
    double mayor1=0;


    cout<<"primer continente: "<<endl;
    for (int i=0; i<5; i++){
        cout<<"nombre del pais: ";
        cin>>uno[i].nombre;
    }
    for (int i=0; i<5; i++){
        cout<<"capital del pais "<<uno[i].nombre<<": ";
        cin>>uno[i].capital;
    }
    for (int i=0; i<5; i++){
        cout<<"habitantes del pais "<<uno[i].nombre<<": ";
        cin>>habitantes[i];

    }
for (int i=0; i<5; i++){
        totalhabitantes +=habitantes[i];
    }
    cout<<"total de habitantes del continente #1: "<<totalhabitantes<<endl;
for (int i=0; i<5; i++){
    if (habitantes[i]>mayor1){
        mayor1= habitantes[i];
    }
}
cout<<"mayor cantidad de habitantes en una ciudad: "<<mayor1<<endl;

    continente2 dos[5];
    double habitantes2[5];
    double totalhabitantes2=0;
    double mayor2=0;


    cout<<"segundo continente: "<<endl;
    for (int i=0; i<5; i++){
        cout<<"nombre del pais: ";
        cin>>dos[i].nombre;
    }
    for (int i=0; i<5; i++){
        cout<<"capital del pais "<<dos[i].nombre<<": ";
        cin>>dos[i].capital;
    }
    for (int i=0; i<5; i++){
        cout<<"habitantes del pais "<<dos[i].nombre<<": ";
        cin>>habitantes2[i];

    }
for (int i=0; i<5; i++){
        totalhabitantes2 +=habitantes[i];
    }
    cout<<"total de habitantes del continente #2: "<<totalhabitantes2<<endl;
for (int i=0; i<5; i++){
    if (habitantes2[i]>mayor2){
        mayor2= habitantes2[i];
    }
}
cout<<"mayor cantidad de habitantes en una ciudad: "<<mayor2<<endl;

    continente3 tres[5];
    double habitantes3[5];
    double totalhabitantes3=0;
    double mayor3=0;


    cout<<"tercer continente: "<<endl;
    for (int i=0; i<5; i++){
        cout<<"nombre del pais: ";
        cin>>tres[i].nombre;
    }
    for (int i=0; i<5; i++){
        cout<<"capital del pais "<<tres[i].nombre<<": ";
        cin>>tres[i].capital;
    }
    for (int i=0; i<5; i++){
        cout<<"habitantes del pais "<<tres[i].nombre<<": ";
        cin>>habitantes3[i];

    }
for (int i=0; i<5; i++){
        totalhabitantes3 +=habitantes3[i];
    }
    cout<<"total de habitantes del continente #3: "<<totalhabitantes3<<endl;
for (int i=0; i<5; i++){
    if (habitantes3[i]>mayor3){
        mayor3= habitantes3[i];
    }
}
cout<<"mayor cantidad de habitantes en una ciudad: "<<mayor3<<endl;

    continente4 cuatro[5];
    double habitantes4[5];
    double totalhabitantes4=0;
    double mayor4=0;


    cout<<"cuarto continente: "<<endl;
    for (int i=0; i<5; i++){
        cout<<"nombre del pais: ";
        cin>>cuatro[i].nombre;
    }
    for (int i=0; i<5; i++){
        cout<<"capital del pais "<<cuatro[i].nombre<<": ";
        cin>>cuatro[i].capital;
    }
    for (int i=0; i<5; i++){
        cout<<"habitantes del pais "<<cuatro[i].nombre<<": ";
        cin>>habitantes4[i];

    }
for (int i=0; i<5; i++){
        totalhabitantes4 +=habitantes4[i];
    }
    cout<<"total de habitantes del continente #4: "<<totalhabitantes<<endl;
for (int i=0; i<5; i++){
    if (habitantes4[i]>mayor4){
        mayor4= habitantes4[i];
    }
}
cout<<"mayor cantidad de habitantes en una ciudad: "<<mayor4<<endl;


    continente5 cinco[5];
    double habitantes5[5];
    double totalhabitantes5=0;
    double mayor5=0;


    cout<<"quinto continente: "<<endl;
    for (int i=0; i<5; i++){
        cout<<"nombre del pais: ";
        cin>>cinco[i].nombre;
    }
    for (int i=0; i<5; i++){
        cout<<"capital del pais "<<cinco[i].nombre<<": ";
        cin>>cinco[i].capital;
    }
    for (int i=0; i<5; i++){
        cout<<"habitantes del pais "<<cinco[i].nombre<<": ";
        cin>>habitantes5[i];

    }
for (int i=0; i<5; i++){
        totalhabitantes5 +=habitantes5[i];
    }
    cout<<"total de habitantes del continente #5: "<<totalhabitantes5<<endl;
for (int i=0; i<5; i++){
    if (habitantes5[i]>mayor5){
        mayor5= habitantes5[i];
    }
}
cout<<"mayor cantidad de habitantes en una ciudad: "<<mayor5<<endl;











return 0;

}
