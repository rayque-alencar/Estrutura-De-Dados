#include "Lista.hpp"
#include "iostream"

int main(){

    Lista lista;
    int auxLista;
    
    cout << "Qual o tamanho da Lista: " << endl;
    cin >> auxLista;

    for (int i = 0; i < auxLista; i++)
    {
        int valorLista;
        cout << "Digite o valor: " << endl;
        cin >> valorLista;
        lista.AdiconarDadoNoFinal(valorLista);
    }
    
    
    while (true){

    int opcao;
    int dado, posicao;

    cout << "\n|--------------------------------------------|" << endl;
    cout << "| 1 - Adicionar elemento na posicao desejada |"   << endl;
    cout << "| 2 - Tamanho da Lista                       |"   << endl;
    cout << "| 3 - Remover elemento da lista              |"   << endl;
    cout << "| 4 - Visualizar elemento com a posicao      |"   << endl;
    cout << "| 5 - Qual a posicao do elemento             |"   << endl;
    cout << "| 6 - Exibir lista                           |"   << endl;
    cout << "|--------------------------------------------|\n" << endl;
    cout << "Digite a opcao desejada: " << endl;
    cin >> opcao;
    system("clear||cls");

        switch (opcao){
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

        case 2: 
            cout << "O tamanho atual da lista eh: " << lista.TamanhoAtual() << endl;
            break;

        case 3:
        
            cout << "Qual a posicao do elemento que voce que remover da lista: " << endl;
            cin >> posicao;
            
            cout << "Elemento removido foi: " << lista.RemoverElemento(posicao) << endl;

            break;

        case 4:
            int posicaoElemento;
            cout << "Qual a posicao do elemento que voce quer visualizar: " << endl;
            cin >> posicaoElemento;
            cout << lista.Elemento(posicaoElemento) << endl;
            break;

        case 5:
            int aux;  
            cout << "Qual o elemento que deseja pesquisar: " << endl;
            cin >> aux;

            cout << lista.Posicao(aux) << endl; 
            break;

        case 6: 
            lista.ExibirLista();
            break;
    
        default:
            break;
        }
    }

    return 0;
}
