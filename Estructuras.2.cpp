#include<iostream>
using namespace std;

int main(){
    //Declaro un nuevo tipo de dato
    int cont=0;
    int salir;
    struct menu{
           string plato1;
           string plato2;
           string postre;
           int kilocalorias; 
    };
    menu menuComedor[5];
    for(cont=0;cont<4;cont++){
       cout<<"DATOS MENU "<<cont<<endl;                       
       cout<<"Cual es el primer plato?: ";
       cin>>menuComedor[cont].plato1;
       cout<<"Cual es el segundo plato?: ";
       cin>>menuComedor[cont].plato2;
       cout<<"Cual es el postre?: ";
       cin>>menuComedor[cont].postre;
       cout<<"Dime las calorias que contiene la comida: ";
       cin>>menuComedor[cont].kilocalorias;
       }
    for(cont=0;cont<4;cont++){
       cout<<"DATOS MENU "<<cont<<endl;
       cout<<"El primer plato del menu"<<cont<<"es: "<<menuComedor[cont].plato1<<endl;
       cout<<"El segundo plato del menu"<<cont<<"es: "<<menuComedor[cont].plato2<<endl;
       cout<<"El postre del menu"<<cont<<"es: "<<menuComedor[cont].postre<<endl;
       cout<<"Las kilocalorias totales del menu"<<cont<<"son: "<<menuComedor[cont].kilocalorias<<endl;
    }
    int suma_calorias=0;
    for(cont=0;cont<4;cont++){
        suma_calorias=suma_calorias + menuComedor[cont].kilocalorias;
    }
    cout<<"Las kilocalorias totales en las cinco comidas son: "<<suma_calorias;
    cout<<"Toca cualquier tecla para salir";
    cin>>salir;
    return 0;
}
