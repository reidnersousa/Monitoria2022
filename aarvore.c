
#include "aarvore.h"
#include <stdio.h>
#include <stdlib.h>


struct aarv
{
    char info;
    struct aarv* esq;
    struct aarv* dir;
};

Aarv* inicializa(void)
{
    return NULL;
}


Aarv* cria(char c, Aarv* sae, Aarv* sad)
{
    Aarv* p=(Aarv*)malloc(sizeof(Aarv));
    p->info = c;
    p->esq = sae;
    p->dir = sad;
    return p;
}


int vazia(Aarv* a)
{
    return a==NULL;
}

void imprime (Aarv* a)
{
    if (!vazia(a))
    {
        printf("%c ", a->info); /* mostra raiz */
        imprime(a->esq); /* mostra sae */
        imprime(a->dir); /* mostra sad */
    }
}


int busca (Aarv* a, char c){
 if (vazia(a))
 return 0; /* árvore vazia: não encontrou */
 else
 return a->info==c || busca(a->esq,c) || busca(a->dir,c);
}


Aarv* libera (Aarv* a){
 if (!vazia(a)){
 libera(a->esq); /* libera sae */
 libera(a->dir); /* libera sad */
 free(a); /* libera raiz */
 }
 return NULL;
}
