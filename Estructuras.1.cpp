//Este programa trata sobre estructuras
#include<iostream>
using namespace std;

int main(){
    int salir;
    //Declaro un nuevo tipo de dato
    struct persona{
           string nombre;
           int edad;
           char colorPelo; //r si es rubio, c si es castaño, p si es pelirrojo u o si es otro
    };
    int cont=0;
    //declaro una variable de tipo
    //persona
    persona amigo[3];
    for(cont=0;cont<3;cont++){
       cout<<"DATOS AMIGO "<<cont<<endl;
       cout<<"Como se llama tu amigo?: ";
       cin>>amigo[cont].nombre;
       cout<<"Cuantos años tiene?: ";
       cin>>amigo[cont].edad;
       cout<<"De que color quiere el pelo?: ";
       cin>>amigo[cont].colorPelo;
      }
    for(cont=0;cont<3;cont++){
      cout<<"Los datos de mi amigo"<<cont<<"son: "<<endl;
      cout<<"El nombre de tu amigo"<<cont<<"es: "<<amigo[cont].nombre<<endl;
      cout<<"La edad de tu amigo"<<cont<<"es: "<<amigo[cont].edad<<endl;
      cout<<"El color de pelo de tu amigo"<<cont<<"es: "<<amigo[cont].colorPelo<<endl;
      }
    cout<<"Toca cualquier tecla para salir.";
    cin>>salir;
    return 0; 
    
    }
