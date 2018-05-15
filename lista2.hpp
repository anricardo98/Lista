#ifndef LISTA2_HPP
#define LISTA2_HPP
#include <string>
#include <vector>
#include <iostream>
using namespace std;

template<>
class Lista<string>{
     private:
        std::vector<string> elementos;
    public:
        void adicionar (string a);
        void retirar (string a);
        void procurar (string a);
        void mostrar();
        void ordenar();
};

template<>
void Lista<string>::adicionar(string a){
    elementos.push_back(a);
    ordenar();
}

template<>
void Lista<string>::retirar (string a){
    for (int i = 0; i < elementos.size(); i++){
        if (strcmp(a, elementos.begin()+i) == 0){
            elementos.erase(elementos.begin()+i);
        }
    }
}

template<>
void Lista<string>::procurar (string a){
     for (int i = 0; i < elementos.size(); i++){
        if (strcmp(a, elementos.begin()+i) == 0){
            cout << elementos.begin()+i << " esta na posicao " << i+1 << endl;
        }
    }
}

template<>
void Lista<string>::mostrar(){
    cout << "A lista possui " << elementos.size() << " elementos " << endl;
    for (int i = 0; i < elementos.size(); i++){
        if (strcmp(a, elementos.begin()+i) == 0){
            cout << elementos.begin()+i << endl;
        }
}

template<>
void Lista<string>::ordenar(){
    for(i = 1; i < elementos.size(); i++){
        for (j = 0; j < elementos.size() - i; j++){
            string temp;
            if(strcmp(elementos[j],elementos[j+1]) > 0){
                strcpy(temp,elementos[j]);
                strcpy(elementos[j], elementos[j+1]);
                strcpy(elementos[j+1],temp);
            }
        }

}

#endif
