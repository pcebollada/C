#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int salir;
    string mensaje;
    ifstream fichero("Fichero2.txt");
    fichero>>mensaje;
    cout<<mensaje<<endl;
    fichero.close();
    cin>>salir;
    return 0;
}
