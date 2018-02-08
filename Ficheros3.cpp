//Leer lineas de un fichero
#include<iostream>
#include<fstream>

using namespace std;

int main (){
    ifstream fichero("Fichero2.txt");
    string mensaje;
    int salir;
    getline(fichero,mensaje); //Se abre fichero, y se vuelca la linea en el "mensaje",que es lo que pone por pantalla.
    cout<<"La primera linea dice: ";
    cout<<mensaje;
    cin>>salir;
    return 0;
    
}
