#include <vector>
#include <string>
#include <cstdlib>
#include "C:\Users\anric\Music\Lista\Lista\lista.hpp"
#include <iostream>
using namespace std;

int main(){

    int classificacao;
    int execucao = 1;
    int opcoes;

    cout << "Qual o tipo de lista que você deseja fazer?" << endl;
    cout << "Digite 1 para uma lista de inteiros" << endl;
    cout << "Digite 2 para uma lista de double" << endl;
    cout << "Digite 3 para uma lista de livros" << endl;
    cin >> classificacao;



    if (classificacao == 1){
        Lista<int> valores;

        while (execucao == 1){

                cout << "O que voce deseja fazer?" << endl;
                cout << "Digite 1 para acrescentar um elemento" << endl;
                cout << "Digite 2 para remover um elemento" << endl;
                cout << "Digite 3 para localizar um elemento" << endl;
                cout << "Digite 4 para mostrar a lista" << endl;
                cin >> opcoes;

                if (opcoes == 1){
                    int x;
                    cout << "Que valor voce deseja acrescentar?" << endl;
                    cin >> x;

                    valores.adicionar(x);
                }

                else if (opcoes == 2){
                    int x;
                    cout << "Que valor voce deseja remover?" << endl;
                    cin >> x;

                    valores.retirar(x);

                }
                else if (opcoes == 3){
                    int x;
                    cout << "Que valor voce deseja localizar?" << endl;
                    cin >> x;
                    valores.procurar(x);

                }
                else if (opcoes == 4){
                    valores.mostrar();
                }
                else {
                    cout << "Opcao invalida" << endl;
                }

                cout << "Deseja realizar o processo novamente?" << endl;
                cout << "Digite 1 caso deseje continuar" << endl;
                cin >> execucao;

            }
    }
    else if (classificacao == 2){
        Lista<double> valores;

        while (execucao == 1){

            cout << "O que voce deseja fazer?" << endl;
            cout << "Digite 1 para acrescentar um elemento" << endl;
            cout << "Digite 2 para remover um elemento" << endl;
            cout << "Digite 3 para localizar um elemento" << endl;
            cout << "Digite 4 para mostrar a lista" << endl;
            cin >> opcoes;

            if (opcoes == 1){
                double x;
                cout << "Que valor voce deseja acrescentar?" << endl;
                cin >> x;

                valores.adicionar(x);

            }

            else if (opcoes == 2){
                double x;
                cout << "Que valor voce deseja remover?" << endl;
                cin >> x;

                    valores.retirar(x);

                }
            else if (opcoes == 3){
                double x;
                cout << "Que valor voce deseja localizar?" << endl;
                cin >> x;
                valores.procurar(x);

            }

            else if (opcoes == 4){
                valores.mostrar();
            }

            else {
                cout << "Opcao invalida" << endl;
            }

            cout << "Deseja realizar o processo novamente?" << endl;
            cout << "Digite 1 caso deseje continuar" << endl;
            cin >> execucao;

            }
    }

    else if (classificacao == 3){
        Lista<string> valores;

        while (execucao == 1){

            cout << "O que voce deseja fazer?" << endl;
            cout << "Digite 1 para acrescentar um elemento" << endl;
            cout << "Digite 2 para remover um elemento" << endl;
            cout << "Digite 3 para localizar um elemento" << endl;
            cout << "Digite 4 para mostrar a lista" << endl;
            cin >> opcoes;

            if (opcoes == 1){
                string x;
                cout << "Que valor voce deseja acrescentar?" << endl;
                cin >> x;

                valores.adicionar(x);

            }

            else if (opcoes == 2){
                string x;
                cout << "Que valor voce deseja remover?" << endl;
                cin >> x;
                valores.retirar(x);

                }
            else if (opcoes == 3){
                string x;
                cout << "Que valor voce deseja localizar?" << endl;
                cin >> x;
                valores.procurar(x);

            }

            else if (opcoes == 4){
                valores.mostrar();
            }

            else {
                cout << "Opcao invalida" << endl;
            }

            cout << "Deseja realizar o processo novamente?" << endl;
            cout << "Digite 1 caso deseje continuar" << endl;
            cin >> execucao;

            }
        }

    else {
        cout << "Valor errado. Reinicie o programa e tente novamente" << endl;
    }

    return 0;
}
