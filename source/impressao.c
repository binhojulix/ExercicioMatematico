#include <stdio.h>
#include <stdlib.h>
#include "impressao.h"

struct impressao {
    char operacaoMatematica[40];
    int quantidaDeAcertos;
    int quantidadeDeEerros;
    char certo[5];
};

typedef struct posicao POSICAO;