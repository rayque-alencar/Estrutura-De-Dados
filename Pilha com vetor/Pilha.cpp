#include "Pilha.hpp"


bool pilha_Vazia(pilha *pilha){
    if(pilha->topo == -1){
        return true;
    }else
        return false;

}

bool pilha_Cheia(pilha *pilha){

    if(pilha-> topo == tamMAX-1){
        return false;
    }else{
        return true;

    }

}

void pilha_Push (Pilha* pilha, int valor){

    if (pilha_Cheia(pilha) == false){ 
        cout << "Pilha Cheia" << endl; 
    }else{
        pilha->topo++;
        pilha->valor[pilha->topo] = valor;
    }
}


int pilha_Pop (Pilha* pilha){

    if(pilha_Vazia(pilha) == true){
        return -1;
    }else{
        int aux;
        aux = pilha->valor[pilha->topo];
        pilha->topo--;
        return aux;
    }

}

int pilha_Top(pilha *pilha){

    if(pilha_Vazia(pilha)){
        return -1;
    }else{
        return pilha->valor[pilha->topo];
    }

}

int pilha_Tamanho(pilha *pilha){

    return pilha->topo+1;
}


void pilha_Liberar(Pilha* pilha){

    free(pilha-> valor);
    free(pilha);

}

void exibir_Pilha(pilha *pilha){
    cout << "--------------PILHA--------------" << endl;
    for (int i= pilha->topo; i>=0; i--){
        cout <<"|"<< pilha->valor[i]<<"|" << endl;
    }
    cout << "---------------------------------" << endl;
    
}