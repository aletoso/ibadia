#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

    FILE *pf;
    
    if((pf=fopen("126-out.txt","w"))==NULL) // abrir fichero en modo escritura
        printf("ERROR AL ABRIR EL FICHERO");
    
    else
    {
              fprintf(pf,"M'agrada programar en C");
    
        fclose(pf);
    }
    
} 