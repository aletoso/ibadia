#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

    FILE *pf;
    
    if((pf=fopen("prova.txt","w"))==NULL) // abrir fichero en modo escritura
        printf("ERROR AL ABRIR EL FICHERO");
    
    else
    {
        printf("\nÉ\ns\n\nd\ni\nf\ni\nl\n\nl'\nE\n/\nS\n\nd\ne\n\nf\ni\nc\nh\ne\nr\ns\n\ne\nn\n\nd\ni\ns\nc");
    }
    
    
} 