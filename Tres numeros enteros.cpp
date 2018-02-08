#include<iostream>
/*Sirve para leer tres numeros enteros y devolver el mayor*/
int main(){
    int n1,n2,n3;
    int mayor,salir;
    std::cout<<"Escribe el primer numero: ";
    std::cin>>n1;
    std::cout<<"Escribe el segundo numero: ";
    std::cin>>n2;
    std::cout<<"Escribe el tercer numero: ";
    std::cin>>n3;
    if(n1>n2){
      if(n1>n3){
        mayor=n1;
      }
      else{
        mayor=n3;
       }
    }
    else{
      if(n2>n3){
        mayor=n2;
      }
      else{
        mayor=n3;
      }
     }

  std::cout<<"El mayor es"<<mayor;
  std::cout<<"Toca cualquier tecla para salir: ";
  std::cin>>salir;
  return 0;
  
}
