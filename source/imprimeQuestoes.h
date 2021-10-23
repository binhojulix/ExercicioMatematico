#ifndef _H_MAIN

struct impressao {
    double valorEsperado;
    double resultado;
    char certo[20]; 
    char operacao[100];
};
typedef struct impressao Impressao;

void ImprimeResultado(Impressao* impressao);


#endif