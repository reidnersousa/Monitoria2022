#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TAD.h"
#include <math.h>

struct conjunto
{
    char x[20];
    char y[20];
};
Conjunto* conj_cria(char x[20], char y[20])
{
    Conjunto* p = (Conjunto*) malloc(sizeof(Conjunto));
    if (p == NULL)
    {
        printf("Memória insuficiente!\n");
        exit(1);
    }


    strcpy(p->x,x);
    strcpy(p->y,y);
   // p->x = x;
    //p->y = y;
    return p;
}




void conj_libera(Conjunto* p)
{
    free(p);
}


void conj_imprimir(Conjunto *c){
    printf("\ninfo %s",c->x);
    printf("\ninfo %s",c->y);


}

void conj_imprimirFor(Conjunto *c){
    int tam=0;
    int i=0;
    tam=strlen(c->y);
    for(i=0; i<5;i++){
        printf("\ninfo %c",c->x[i]);
        printf("\ninfo %c",c->y[i]);
    }




}
