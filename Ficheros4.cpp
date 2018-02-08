#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fichero("Fichero4.txt");
    int cont=0;
    string nombre;
    string numero;
    for (cont;cont<4;cont++){
    cout<<"Dime un nombre: ";
    cin>>nombre;
    fichero<<nombre;
    cout<<"Dime un numero de telefono: ";
    cin>>numero;    
    fichero<<numero<<endl;
    }
    fichero.close();
}
    
    
    
    
    
