#include<iostream>
#include<fstream>

//Bucle con una variable interruptora
int main(){
    char otro='s';
    string nombre;
    string numero;
    ifstream fichero ("Fichero5.txt")
    while (otro=='s'){
          cout<<"Nombre: ";
          cin>>nombre;
          cout<<"Numero: ";
          cin>>numero;
          fichero<<nombre<<", "<<numero<<endl
          cout<<"Deseas introducir otro amigo (s/n)?
          cin>>otro;
    }
    
    
    }
