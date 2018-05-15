#ifndef LISTA_HPP_INCLUDED
#define LISTA_HPP_INCLUDED
#include <iostream>
using namespace std;
#include <vector>

template <class Tipo>
class Lista{
    private:
        vector<Tipo> elementos;
    public:
        void adicionar (Tipo a);
        void retirar (Tipo a);
        void procurar (Tipo a);
        void mostrar();
        void ordenar();
};

template <class Tipo>
void Lista<Tipo>::adicionar(Tipo a){
    elementos.push_back(a);
    ordenar();
}

template <class Tipo>
void Lista<Tipo>::retirar (Tipo a){
    if (elementos.size() > 0){
        for (int i = 0; i < elementos.size(); i++){
            if (a == elementos[i]){
                elementos.erase(elementos.begin()+i);
            }
        }
    }
}

template <class Tipo>
void Lista<Tipo>::procurar(Tipo a){
    int aux = 0;
    for (int i = 0; i < elementos.size(); i++){
            if (a == elementos[i]){
                cout << "O elemento " << a << "encontra-se na posicao" << i+1 << endl;
                aux++;
            }
        }
    if (aux == 0){
        cout << "O elemento nao encontra-se na lista" << endl;
    }
}

template <class Tipo>
void Lista<Tipo>::mostrar(){
    cout << "Há " << elementos.size() << " elementos na lista" << endl;

    for (int i = 0; i < elementos.size(); i++){
        cout << elementos[i] << endl;
    }

}

template <class Tipo>
void Lista<Tipo>::ordenar(){
    for (int i = 0; i < elementos.size(); i++){
        Tipo elemento = elementos[i];

        int insercao = i;

        while (insercao > 0 && elementos[insercao - 1] > elemento){
            elementos[insercao] = elementos[insercao - 1];
            insercao--;
        }

        elementos[insercao] = elemento;
    }
}

#endif // LISTA_HPP_INCLUDED
