#include <stdio.h>
#include <stdlib.h>
#include "coletor.h"

int main()
{
    int *v = (int*)malloc2(sizeof(int)); // Corrigido: casting para int*
    *v = 10;
    int *w = (int*)malloc2(sizeof(int)); // Corrigido: casting para int*
    dump();
    *w = 20;
    atrib2((void**)&v, w); // Corrigido: casting para (void**)
    dump();
    char *c = (char*)malloc2(sizeof(char)); // Corrigido: casting para char*
    *c = 'Z';
    dump();
    atrib2((void**)&w, NULL); // Corrigido: casting para (void**)
    atrib2((void**)&v, NULL); // Corrigido: casting para (void**)
    dump();
    return 0;
}
