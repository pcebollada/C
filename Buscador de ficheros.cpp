#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
    int salir;
    string nombre;
    string linea;
    int repetir=0;
    cout<<"Dime el nombre del archivo que quieres leer entrecomillado y al final .txt: ";
    getline(cin,nombre); 
       ifstream fichero(nombre.c_str());
    do{
       
       if (fichero.fail()==1){
          cout<<"ERROR. El archivo no existe";
          cout<<"Dime la ruta del archivo:";
          getline(cin,nombre); 
          ifstream fichero(nombre.c_str());
          cin>>salir;
          repetir=1;
          }else{
                repetir=0;
                }
       }while(repetir==1);   
          
       while(fichero.eof()==0){
         getline(fichero,linea); 
         cout<<linea<<endl;
         }
    fichero.close(); //cuando solo leemos un fichero no tenemos por qué hacer esto, pero si escribimos en el hay que hacerlo obligatoriamente
    cin>>salir;
    return 0;
}
