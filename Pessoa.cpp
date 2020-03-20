#include <string.h>
#include <stdio.h>
#include <iostream> 
using std::cout; 
using std::endl;
using std::cin;

#include "Pessoa.h"

Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, char* nome) {
    Inicializa(diaNa, mesNa, anoNa, nome);
}

Pessoa::Pessoa() {
    Inicializa(0,0,0);
}

void Pessoa::Inicializa(int diaNa, int mesNa, int anoNa, char* nome) {
    diaP = diaNa;
    mesP = mesNa;
    anoP = anoNa;
    idadeP = 0;
    strcpy(nomeP, nome);
}

void Pessoa::Calcula_Idade(int diaAt, int mesAt, int anoAt) {
    idadeP = anoAt - anoP;

    if (mesP < mesAt) {
        idadeP = idadeP - 1;
    } else {
        if (mesP == mesAt) {
            if (diaP < diaAt) {
                idadeP = idadeP - 1;
            }
        }
    }

    cout <<"A pessoa "<<nomeP<<" teria "<<idadeP<<" anos"<< endl; 

}

int Pessoa::InformaIdade() {
    return idadeP;
} 