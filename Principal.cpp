#include "Principal.h"
#include <stdio.h>
#include <iostream> 
using std::cout; 
using std::endl;
using std::cin;

// Separamos os arquivos Main em Principal pela seguinte razão:
// Todos os objetos criados serão instanciados pela classe Principal
// e todos os valores necessários para sua execução estarão disponíveis
// em seu header. Assim, geramos menor acoplamento e responsabilidade 
// da função main por parte de inicialização dos objetos. Aqui, a função
// main apenas inicializa o objeto Principal, que será responsável por inicializar
// todos os outros objetos do programa.

Principal::Principal() {
    Rosa.Inicializa(5, 3, 1871, "Rosa Luxemburgo");
    Angela.Inicializa(26, 1, 1944, "Angela Davis");
    Ada.Inicializa(10, 12, 1815, "Ada Lovelace");
    Pyettra.Inicializa(29, 1, 1997, "Pyettra Ferreira");

    cout <<"Informe o dia"<< endl;
    cin >>dia;

    cout <<"Informe o mês"<< endl;
    cin >>mes;

    cout <<"Informe o ano"<< endl;
    cin >>ano;

    Executar();
}

void Principal::Executar() {
    Rosa.Calcula_Idade(dia, mes, ano);
    Angela.Calcula_Idade(dia, mes, ano);
    Ada.Calcula_Idade(dia, mes, ano);
    Pyettra.Calcula_Idade(dia, mes, ano);
}

int main() {
    // Aqui, criamos a instância do objeto do tipo Principal
    Principal ObjetoPrincipal;


    // Com o objeto criado, aqui chamamos o método Executar.
    // Esse método pertence a classe Principal. Como temos o 
    // o obejto ObjetoPrincipal do tipo Principal (rs), ele consegue utilizar esse método
    ObjetoPrincipal.Executar();

    getchar();

    return 0;
}