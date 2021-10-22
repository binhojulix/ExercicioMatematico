
#include <stdio.h>
#include <stdlib.h>
#include "historico.h"


void adicionaHistorico() {
    char quer;
    char novohistorico[20];
    scanf("%s", novohistorico);

    FILE* f;

    f = fopen("historico.txt", "r+");
    if(f == 0) {
        printf("Histórico de questoes não disponivel\n\n");
        exit(1);
    }

    int qtd;
    fscanf(f, "%d", &qtd);
    qtd++;
    fseek(f, 0, SEEK_SET);
    fprintf(f, "%d", qtd);

    fseek(f, 0, SEEK_END);
    fprintf(f, "\n%s", novohistorico);

    fclose(f);

    
}