//Manejo de punteros
#include<stdio.h>
#include<stdlib.h> //este comando es necesario para que "malloc" funcione
#include<string.h> //este comando es necesario para que "strcpy" funcione

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
    for(cont=0;cont<5;cont++){
        printf("Nombre amigo %i: ",cont);
        scanf("%s",aux);
        L=medida(aux);
        printf("\nTiene %i letras",L);
        lista[cont]=(char*) malloc(L*sizeof(char));
        strcpy(lista[cont],aux);
        /*sirve para copiar letra a letra una cadena y copiarla en el sitio de destino. 
        Primero se pone el lugar de destino y lo segundo es de donde queremos sacarlo*/
    }
    
    for(cont=0;cont<5;cont++){
    printf("\n%s",lista[cont]);
    }
}
    
