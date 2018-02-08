//Manejo de punteros
#include<stdio.h>
#include<stdlib.h> 
#include<string.h> 

int medida(char aux[]){
    int L=0;
    while(aux[L]!='\0'){
    L++;
    }
    return L;
    
}

int main(){
    int salir;
    int L;
    char aux[15];
    char *lista[5];
    int cont=0;
    int nveces;
    char *pauxiliar; //puntero auxiliar para realizar un intercambio a tres bandas
    for(cont=0;cont<5;cont++){
        printf("Nombre amigo %i: ",cont);
        scanf("%s",aux);
        L=medida(aux);
        printf("\nTiene %i letras",L);
        lista[cont]=(char*) malloc(L*sizeof(char));
        strcpy(lista[cont],aux);
    }
    
    for(cont=0;cont<5;cont++){
    printf("\n%s",lista[cont]);
    }
//Ordenamiento
/*Dos personas tienen un boligrafo y quieren intercambiarlo con un intermediario*/
    for(nveces=1;nveces<5;nveces++){
      for(cont=0;cont<4;cont++){
        if(*lista[cont]>*lista[cont+1]){
          pauxiliar=lista[cont]; //El intermediario coge el boli. Persona1 queda sin nada
          lista[cont]=lista[cont+1]; //Persona2 le da el boli a persona1. Persona2 se queda vacio
          lista[cont+1]=pauxiliar; //El intermediario le da el boli a la persona2
        } //Serían lista[0] y lista[1]
      }
   } 
//Despues del ordenamiento
    printf("\nLISTAORDENADA:");
    for(cont=0;cont<5;cont++){
        printf("\n%s",lista[cont]);

}
scanf("%i",&salir);
}
