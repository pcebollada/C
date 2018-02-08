//Leer lineas de un fichero
#include<iostream>
#include<fstream>

using namespace std;

int main (){
    ifstream fichero("Fichero2.txt");
    string mensaje;
    int salir;
    int line=1;
    cout<<"El texto dice: ";
    for (line=1;line<=4;line++){
        getline(fichero,mensaje); //Se abre fichero, y se vuelca la linea en el "mensaje",que es lo que pone por pantalla.
        if (fichero.eof()!=1){
           cout<<mensaje;
           cout<<endl;
        }
        }
    cin>>salir;
    return 0;
    
}
