//Manejo de punteros
#include<stdio.h>
#include<stdlib.h> //este comando es necesario para que malloc funcione

int main(){
    int salir;
    char *lista[3]; //El asterisco es para indicar que va a haber tres punteros a tres letras, las iniciales de cada palabra
    lista[0]= (char *) malloc(8*sizeof(char)); 
    /*
    - Usamos la posición cero de la lista (Melchor).
    - (char *) es un factor de conversión forzado. Nos asegura que si estamos trabajando con algo, nos devuelva lo relacionado con lo que trabajamos
    - Malloc   viene de las palabras memory  allocation. Sirve para buscar en la memoria RAM un hueco de memoria de tamaño X
    - Estamos guardando la palabra Melchor (siete letras) mas un cero tachado que siempre se añade al final
    */
    lista[1]= (char *) malloc(7*sizeof(char)); //Guardamos la palabra Gaspar 
    lista[2]= (char *) malloc(9*sizeof(char)); //Guardamos la palabra Baltasar
    printf("\nPrimer rey mago: ");
    scanf("%s",lista[0]);
    printf("\nSegundo rey mago: "); 
    scanf("%s",lista[1]);
    printf("\nTercer rey mago: ");
    scanf("%s",lista[2]);
    
    printf("\nLos tres reyes de Oriente son: ");
    printf("%s,",lista[0]);
    printf("%s y ",lista[1]);
    printf("%s",lista[2]);
    
    scanf("%i",&salir);
}
