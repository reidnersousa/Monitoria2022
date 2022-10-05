#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TAD.h"
#include <math.h>

struct conjunto
{
    char x[20];

};
Conjunto* conj_cria(char x[20])
{
    Conjunto* p = (Conjunto*) malloc(sizeof(Conjunto));
    if (p == NULL)
    {
        printf("Memória insuficiente!\n");
        exit(1);
    }


    strcpy(p->x,x);

    // p->x = x;
    //p->y = y;
    return p;
}




void conj_libera(Conjunto* p)
{
    free(p);
}


void conj_imprimir(Conjunto *c)
{
    printf("\ninfo l%s",c->x);



}

void conj_imprimirFor(Conjunto *c)
{
    int tam=0;
    int i=0;
    tam=strlen(c->x);
    for(i=0; i<tam; i++)
    {
        printf("\ninfo %c  i=%d",c->x[i],i); // numeros com indice par serao os numero do conjunto  e os indices impares terao ,
    }
}


void Inte (Conjunto *a, Conjunto *b,Conjunto *c)
{
    int tamA=0;
    int tamB=0;
    int i=0,j=0;
    tamA=strlen(a->x);
    tamB=strlen(b->x);




    for(i=0; i<tamA; i+=2)
    {
        //printf("\ninfo %c  i=%d",a->x[i],i); // numeros com indice par serao os numero do conjunto  e os indices impares terao ,
        for(j=0; b->x[j]!=NULL; j+=2)
        //for(j=0; i<tamB; j+=2)
        {
            if(a->x[i]==b->x[j]){
                printf("\nA =%c  B=%c  i=%d j=%d",a->x[i],b->x[j],i,j);
               // strcpy(c->x,b->x[0]);


            }

        }



    }
    //return c;

}
