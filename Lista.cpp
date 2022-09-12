#include "Lista.hpp"

Lista::Lista(){

    tamanhoMax = 100;
    tamanhoAtual = 0;
    dados = new int[tamanhoMax];

}

bool Lista::ListaVazia(){

    if(tamanhoAtual == 0)
        return true;
    else
        return false;          
}

bool Lista::ListaCheia(){

    if (tamanhoAtual == tamanhoMax)
        return true;
    else
        return false;
}

int Lista::TamanhoAtual(){
    return tamanhoAtual;
}

int Lista::Elemento(int posicao){

    int dado;

    if(posicao > tamanhoAtual || posicao <= 0){
        return -1;
    }else{
        dado = dados[posicao-1];
        return dado;
    }

}

int Lista::Posicao(int dado){

    for (int i = 0; i < tamanhoAtual; i++){
        
        if(dados[i] == dado){
            return i + 1;
        }
    }

    return -1;
}

bool Lista::AdicionarElemento(int posicao, int dado){

    if ((ListaVazia()) || (posicao > tamanhoAtual+1) || (posicao <=0)){
        return false;
    }

    for (int i = tamanhoAtual; i >= posicao; i--)
    {
        dados[i] = dados[i-1];   
    }

    dados[posicao-1] = dado;
    tamanhoAtual++;
    return true;

}

bool Lista::AdiconarDadoNoFinal(int x){
    if( ! ListaCheia() ) {
        dados[tamanhoAtual] = x;
        tamanhoAtual++;
        return true;
    }else 
        return false;
}


int Lista::RemoverElemento(int posicao){

    int auxDadoRemover;
    
    if( (posicao > tamanhoAtual) || (posicao < 1) ){
        return -1;
    }

    auxDadoRemover = dados[posicao-1];

    for (int i = posicao - 1; i < tamanhoAtual -1; i++)
    {
        dados[i] = dados[i+1];
    }
    
    tamanhoAtual--;
    return auxDadoRemover;
}

void Lista::ExibirLista(){

    for (int i = 0; i < tamanhoAtual; i++)
    {
        cout << " | " << dados[i] << " | "; 
    }
    

}

