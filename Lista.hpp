#ifndef LISTA_H
#define LISTA_H
#include "iostream"

using namespace std;



class Lista
{
public:

    //metodos para criação e modificação da Lista.
    Lista();
    bool ListaVazia();
    bool ListaCheia();
    int TamanhoAtual();
    int Elemento(int posicao);
    int Posicao(int dado);
    bool AdicionarElemento(int posicao, int dado);
    int RemoverElemento(int posicao);
    bool AdiconarDadoNoFinal(int x);
    void ExibirLista();
    
private:
    int tamanhoAtual;
    int tamanhoMax;
    int *dados; 

};  

#endif