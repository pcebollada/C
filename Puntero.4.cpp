//Programas sobre manejo de memoria
#include<stdio.h> //En vez de include<iostream>

int main(){
    int a=3;
    int b=2;
    int salir;
    printf("direcccion de a= %x\n",&a); 
    printf("direccion de b= %x\n",&b);
    //El ordenador usa un sistema hexadecimal (1,2,3,4,5,6,7,8,9,a,10a,11b,...) &a significa
    /*A veces, cuando el ordenador llega a la linea 4, al reservar parte de la memoria para guardar el numero entero, lo guarda en un sitio concreto.
    El primero sale 28ff44, y el segundo sale 28ff40. Esos son los lugares que ocupan, ocupando cada numero entero 4 bits.*/
    /*INT y CHAR ocupan cuatro bits*/
    scanf("%c",&salir);        
}
