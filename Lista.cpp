#include "Lista.hpp"

Lista::Lista(){

    tamanhoMax = 100;
    tamanhoAtual = 0;
    dados = new int[tamanhoMax];

}

//verificar se a lsita está vazia
bool Lista::ListaVazia(){

    if(tamanhoAtual == 0)
        return true;
    else
        return false;          
}

//verificar se a lista está cheia
bool Lista::ListaCheia(){

    if (tamanhoAtual == tamanhoMax)
        return true;
    else
        return false;
}

//retorma o tamanho atual da lista
int Lista::TamanhoAtual(){
    return tamanhoAtual;
}

//retorna o dado/elemento que tem na posição desejada
int Lista::Elemento(int posicao){

    int dado;

    if(posicao > tamanhoAtual || posicao <= 0){
        return -1;
    }else{
        dado = dados[posicao-1];
        return dado;
    }

}

//retorna a posição do dado/elemento desejado
int Lista::Posicao(int dado){

    for (int i = 0; i < tamanhoAtual; i++){
        
        if(dados[i] == dado){
            return i + 1;
        }
    }

    return -1;
}

//adiconar elemento passando a posição desejada junto com o dado/elemento
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

//adicionar elemento no final da lista
bool Lista::AdiconarDadoNoFinal(int x){
    if( ! ListaCheia() ) {
        dados[tamanhoAtual] = x;
        tamanhoAtual++;
        return true;
    }else 
        return false;
}

//remover elemento da lista, passando a posição dele
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

//metodo para exibir a lista completa no tamanho atual dela
void Lista::ExibirLista(){

    for (int i = 0; i < tamanhoAtual; i++)
    {
        cout << " | " << dados[i] << " | "; 
    }
    

}

