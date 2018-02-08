#include<stdio.h>

int main(){
    char palabra1[5];
    char palabra2[5];
    int salir;
    printf("Dime algo: ");
    scanf("%s",palabra1); //%s es porque leemos una s de string
    printf("direccion palabra1= %x",palabra1);
    printf("\nDime algo mas: ",palabra2);
    scanf("%s",palabra2);
    printf("direccion palabra2= %x",palabra2);
    printf("palabra1= %s\n",palabra1); 
    printf("palabra2= %s\n",palabra2);
    scanf("%i",&salir);
}    
