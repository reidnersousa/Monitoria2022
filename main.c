#include <stdio.h>
#include <stdlib.h>
#include "TAD.h"
int main()
{

    float x, y;
    Conjunto * p = conj_cria("2","1.0BAC");



    conj_imprimir(p);
    conj_imprimirFor(p);

    conj_libera(p);
    printf("Hello world!\n");
    return 0;
}
