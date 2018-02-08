#include<iostream>
/*Definicion de variable*/

int main (){
    int a;
    int b;
    int c;
    int solucion,salir;
    /*Inicializacion de variables*/
    a=2;
    b=4;
    c=-1;
    solucion=a+b+c;
    std::cout<<"La solucion es: " <<solucion << std::endl;
    std::cout<<"Para seguir, toca cualquier tecla: ";
    std::cin>>salir;
    return 0;
}         
