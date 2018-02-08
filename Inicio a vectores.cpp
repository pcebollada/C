#include<iostream>
using namespace std; //esto sirve para no tener que poner todo el rato std en los inputs y outputs
/*Programa que sirve para que almacene cinco numeros en un vector y luego te muestre la suma de todos*/
int main(){
    int vector[5];
    int cont;
    int salir;
    int suma=0;
    //Rellenamos el vector
    for(cont=0;cont<5;cont++){
        cout<<"Dime un numero: ";
        cin>>vector[cont];
        //esto nos permite sumarlo
        suma=suma+vector[cont];
        }
    cout<<"Mira mi vector relleno: ";
    for(cont=0;cont<5;cont++){
        cout<<"vector["<<cont<<"]="<<vector[cont]<<endl;//sirve para cambiar de linea al mostrar el resultado                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
        }
    cout<<"La suma de todos los numeros es: "<<suma<<endl;
    cout<<"Toca cualquier tecla para terminar";
    cin>>salir;
    return 0;
    
    
    }
