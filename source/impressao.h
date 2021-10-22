#ifndef _H_MAIN

typedef struct impressao {
    char operacaoMatematica[40];
    int quantidaDeAcertos;
    int quantidadeDeEerros;
    char certo[5];
} Impressao;

void imprimir(double  a, double b);
void imprimirEstatisica(Impressao *impressao);

#endif
