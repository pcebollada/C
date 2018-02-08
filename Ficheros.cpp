//Ficheros
#include<iostream>
#include<fstream> //Es la que contiene lo necesario para buscar ficheros
using namespace std;
int salir;
int main(){
    //Abrimos el fichero
    ofstream fichero("miFichero.txt"); // la terminacion es de .txt para concretar el formato
    fichero<<"En un lugar de la Mancha"<<endl;
    fichero<<"de cuyo nombre no quiero acordarme";
    fichero.close();
    cout<<"Ya esta. Fichero cerrado.";
    cin>>salir;
    
    return 0; 
      
}
