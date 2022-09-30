#ifndef PILHA_HPP
#define PILHA_HPP

#include "iostream"
#include "stdio.h"
#include "stdlib.h"
#define tamMAX 100

using namespace std;

    typedef struct Pilha{
        int valor[tamMAX];
        int topo = -1;
        
    }pilha;

    void pilha_Push(pilha* pilha, int valor);
    int pilha_Pop(pilha* pilha);
    bool pilha_Vazia(pilha* pilha);
    bool pilha_Cheia(pilha *pilha);
    int pilha_Tamanho(pilha *pilha);
    int pilha_Top(pilha *pilha);
    void exibir_Pilha(pilha *pilha);

#endif