#include <stdio.h>
#include <stdlib.h>
#include "TAD.h"
int main()
{


    Conjunto * a = conj_cria("a,b,c");
    Conjunto * b = conj_cria("b,d");


    printf("\n>>>a");
    conj_imprimir(a);
    conj_imprimirFor(a);

    printf("\n>>b");
    conj_imprimir(b);
    conj_imprimirFor(b);

    conj_libera(a);


    conj_libera(b);

    return 0;
}
