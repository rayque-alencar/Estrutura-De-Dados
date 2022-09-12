#include "Lista.hpp"
#include "iostream"

int main(){

    //Criação da lista
    Lista lista;
    int auxLista;
    
    //Setando o tamanho da lista de acordo com o usuario
    cout << "Qual o tamanho da Lista: " << endl;
    cin >> auxLista;

    //for para coletar os valores a serem adicionados a lista
    for (int i = 0; i < auxLista; i++)
    {
        int valorLista;
        cout << "Digite o valor: " << endl;
        cin >> valorLista;
        lista.AdiconarDadoNoFinal(valorLista);
    }
    
    //while para fazer um menu de opção
    while (true){

    int opcao;
    int dado, posicao;

    cout << "\n|--------------------------------------------|" << endl;
    cout << "| 1 - Adicionar elemento na posicao desejada |"   << endl;
    cout << "| 2 - Adiciona elemento no final da lista    |"   << endl;
    cout << "| 3 - Tamanho da Lista                       |"   << endl;
    cout << "| 4 - Remover elemento da lista              |"   << endl;
    cout << "| 5 - Visualizar elemento com a posicao      |"   << endl;
    cout << "| 6 - Qual a posicao do elemento             |"   << endl;
    cout << "| 7 - Exibir lista                           |"   << endl;
    cout << "|--------------------------------------------|\n" << endl;
    cout << "Digite a opcao desejada: " << endl;
    cin >> opcao;
    system("clear||cls");

        switch (opcao){
        //adicionar na posição 
        case 1:
            cout << "Voce que adicionar o valor na posicao: " << endl;
            cin >> posicao;
        
            cout << "Qual o valor para ser adicionado: " << endl;
            cin >> dado;

            bool auxbool;
            auxbool = lista.AdicionarElemento(posicao, dado);

            if(auxbool == true){
                cout << "Elemento adicionado com sucesso!" << endl;
            }else{
                cout << "Nao foi possivel adicionar o elemento" << endl;
            }
            break;
        //adicionar elemento no final da lista
        case 2:

            int valorLista;
            cout << "Digite o valor: " << endl;
            cin >> valorLista;
            lista.AdiconarDadoNoFinal(valorLista);
            break;

        //tamanho da lista atual
        case 3: 

            cout << "O tamanho atual da lista eh: " << lista.TamanhoAtual() << endl;
            break;

        //remover elemento da lista 
        case 4:
        
            cout << "Qual a posicao do elemento que voce que remover da lista: " << endl;
            cin >> posicao; 
            cout << "Elemento removido foi: " << lista.RemoverElemento(posicao) << endl;
            break;

        //Visualizar elemento com a posição 
        case 5:
            int posicaoElemento;
            cout << "Qual a posicao do elemento que voce quer visualizar: " << endl;
            cin >> posicaoElemento;
            cout << lista.Elemento(posicaoElemento) << endl;
            break;

        //pesquisar elemento com o posição
        case 6:
            int aux;  
            cout << "Qual o elemento que deseja pesquisar: " << endl;
            cin >> aux;

            cout << lista.Posicao(aux) << endl; 
            break;

        //exibir todos os elementos da lista
        case 7: 
            lista.ExibirLista();
            break;
    
        default:
            break;
        }
    }

    return 0;
}
