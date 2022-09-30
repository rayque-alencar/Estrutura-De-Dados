#include "iostream"
#include "Pilha.hpp"

int main(){

    Pilha pilha; 
    
    while (true){

    int opcao;
    int dado;

    cout << "\n|--------------------------------------------|" << endl;
    cout << "| 1 - Adiciona elemento na pilha             |"   << endl;
    cout << "| 2 - Tamanho da pilha                       |"   << endl;
    cout << "| 3 - Remover elemento da pilha              |"   << endl;
    cout << "| 4 - Exibir topo da pilha                   |"   << endl;
    cout << "| 5 - Exibir pilha                           |"   << endl;
    cout << "|--------------------------------------------|\n" << endl;
    cout << "Digite a opcao desejada: " << endl;
    cin >> opcao;
    system("clear||cls");

        switch (opcao){
       
        case 1:
            cout << "Qual o valor para ser adicionado: " << endl;
            cin >> dado;
            
            pilha_Push(&pilha, dado);
            break;
     
        case 2:

            cout << "O tamanho da pilha atual eh: " << pilha_Tamanho(&pilha) << endl;
            break;

        case 3: 

            cout << "Removendo da pilha... " << endl;
            cout << "Elemento removido foi: " << pilha_Pop(&pilha) << endl;
            break;

        
        case 4:
            cout << "Topo da Pilha eh : " << pilha_Top(&pilha) << endl;
            break;
     
        
        case 5:
            exibir_Pilha(&pilha);
            break;
    
        default:
            break;
        }
    }

    return 0;
}
