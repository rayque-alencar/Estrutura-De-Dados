#ifndef PILHA_HPP
#define PILHA_HPP

#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#include "NoPilha.hpp"

using namespace std;

    typedef struct Pilha{
        int numeroElementos = 0;
        NoPilha *topo = NULL;
        
    }pilha;

    

    pilha* pilha_criar(void);
    void pilha_Push(pilha* pilha, int valor);
    int pilha_Pop(pilha* pilha);
    bool pilha_Vazia(pilha* pilha);
    int pilha_Tamanho(pilha *pilha);
    int pilha_Top(pilha *pilha);
    void exibir_Pilha(pilha *pilha);

#endif