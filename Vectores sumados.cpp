/*Coger dos vectores, sumarlos e imprimir el resultado por*/
#include<iostream>
using namespace std;

int main(){
    int vector1[5];
    int vector2[5];
    int cont=0;
    
    for (cont=0;cont<5;cont=cont+1){
        cout<<"Dime un numero: ";
        cin>>vector1[cont];
        }
    
    for (cont=0;cont<5;cont=cont+1){
        cout<<"Dime un numero: ";
        cin>>vector2[cont];
        }

    for (cont=0;cont<5;cont=cont+1){
        cout<<"El vector 1 es"<<vector1[cont];
        cout<<"El vector 2 es"<<vector2[cont];
        cout<<"La suma es"<<vector1[cont]+vector2[cont]<<endl;
        }
    cin>>cont;
    return 0;
    
    /*Corrección de Antonio:
    #include<iostream>
using namespace std;
int main(){
    int vect1[5];
    int vect2[5];
    int vect_t[5];
    int salir;
//Rellenamos los vectores
    for(int cont=0;cont<5;cont++){
       cout<<"vect["<<cont<<"]= ";
       cin>>vect1[cont];
    }
    for(int cont=0;cont<5;cont++){
       cout<<"vect["<<cont<<"]= ";
       cin>>vect2[cont];
    }
    for(int cont=0;cont<5;cont++){
       vect_t[cont]=vect1[cont]+vect2[cont];
    } 
   //Mostramos el vector por pantalla
    for(int cont=0;cont<5;cont++){
       if(cont==0){
         cout<< "["<<vect_t[cont]<<",";
       }
       if(cont==4){
         cout<< vect_t[cont]<<"]";
       }
       if(cont!=0 && cont!=4){
         cout<< vect_t[cont]<<",";
       }
            
    }
     
    cout<<"Presiona para salir y luego ENTER";
    cin>>salir;
    return 0;
}
*/
      
      
      
      
      
      
}
