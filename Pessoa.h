#include <stdio.h>

class Pessoa {
    private:
        int diaP;
        int mesP;
        int anoP;
        int idadeP;
        char nomeP[30];

    public:
        Pessoa(int diaP, int mesP, int anoP, char* nome="");

        // Agora vamos utilizar uma classe Principal encarregada de incializar todos os objetos 
        // necessário para nosso programa. Para isso, é necessário criar uma função construtora
        // vazia para todas as classes de objetos que serão utilizados. No início da declaração
        // dos métodos da classe Pessoa temos a assinatura do construtor de Pessoa, a chamada do
        // método sem parâmetros e a função Inicializa, que será construída no arquivo Pessoa.cpp
        // com o corpo de sua função.
        Pessoa();

        void Inicializa(int diaP, int mesP, int anoP, char* nome="");

        void Calcula_Idade(int diaAt, int mesAt, int anoAt);

        int InformaIdade();

};

// IMPORTAAAAAAAAANTEEEEEEEE!!!!!!!!!
// NÃO ESQUECER DO PONTO E VÍRGULA APÓS INICIALIZAÇÃO DA CLASSE NO ARQUIVO HEADER!!!