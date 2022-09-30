#ifndef NOPILHA_HPP
#define NOPILHA_HPP
#include "stdio.h"
#include "stdlib.h"

typedef struct NoPilha{
    int valor;
    struct NoPilha* proximo = NULL;

}NoPilha;



#endif