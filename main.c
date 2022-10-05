#include <stdio.h>
#include <stdlib.h>
#include "TAD.h"
int main()
{


    Conjunto * a = conj_cria("a,b,c");
    Conjunto * b = conj_cria("b,d");


    Inte(a,b);

    conj_libera(a);


    conj_libera(b);

    return 0;
}
