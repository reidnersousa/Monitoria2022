#include <stdio.h>
#include <stdlib.h>
#include "TAD.h"
int main()
{


    Conjunto * a = conj_cria("a,b,c");
    Conjunto * b = conj_cria("b,d");
    Conjunto * c = conj_cria("\0");


    Inte(a,b,c);

    conj_imprimir(c);

    conj_libera(a);
    conj_libera(b);
    conj_libera(c);


    char str1[20]="Arroz";
    char str2[20]="feijao";
    strcat(str1,str2);
    printf("\nString = %s \nString =%s",str1,str2);

    return 0;
}
