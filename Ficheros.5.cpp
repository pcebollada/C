//Lectura hasta el final
#include<iostream>
#include<fstream>
using namespace std;

int main (){
    int salir;
    string linea;
    ifstream fichero("wFichero6.txt"); //si queremos que funcione el nombre original es "Fichero6"
    
    /*ifstream es para declarar que vas a usar un fichero, y esa linea en el ordenador lo que hace es buscar la ruta, ya sea en un sitio 
    cualquiera (seria asi si pusieramos solo el nombre del fichero), o en un lugar concreto (llamado directorio raíz), y tras buscarlo, 
    lo vuelca en la RAM, lo lee línea a línea*/
    
    if(fichero.fail()==1){
                          
    /*fichero.fail es para un fichero que no está bien. Aqui establecemos la condiciono de que si no es el archivo que queremos,
    el programa sale */
    
       cout<<"ERROR. No existe la ruta";
       cin>>salir;
       exit(1); //el programa sale directamente                
    }
    while(fichero.eof()==0){//este comando establece la condición de que siga leyendo el archivo hasta el final
         getline(fichero,linea); //lee todos los símbolos de texto hasta que encuentra el endl y lo guarda en una variable
         cout<<linea<<endl;
    }
    fichero.close(); //cuando solo leemos un fichero no tenemos por qué hacer esto, pero si escribimos en el hay que hacerlo obligatoriamente
    cin>>salir;
    return 0;
}
