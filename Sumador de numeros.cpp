/*Este programa sirve para pedir diez numeros y devolver la suma total*/
#include <iostream>

int main(){
    int cont;
    int numero;
    int suma;
    int salir;
    suma=0;
    for(cont=1;cont<=10;cont++){
        std::cout<<"Dime un numero: ";
        std::cin>>numero;
        suma=suma+numero;
    }
    std::cout<<"La suma total es"<<suma;
    std::cout<<"Toca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
    }
