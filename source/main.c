#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"
#include "menu.h"
#include "estatistica.h"
#include "geraAleatorio.h"
#define NUMERO_DE_PERGUNTAS 10

int main(){

    while(1){

        int difuldade, operacao;
        mostrarMenuDificuldade();

        do{
            scanf("%d", &difuldade);
        }while(difuldade < 1 || difuldade > 7 );

        mostrarMenuOperacao();

        do{
            scanf("%d", &operacao);
        }while(operacao < 1 || operacao > 5 );

        if(operacao>4){

        }

        for(int i=1; i<=NUMERO_DE_PERGUNTAS; i++){
            double resposta;
            double valor1 = aleatorio();
            double valor2 = aleatorio();
            double resultado = calcular(operacao, valor1, valor2);
            printf("Quanto é %.1f + %.1f", valor1, valor2);
            scanf("%lf", resposta);
            if(resultado == resposta){

            }
        }

        mostrarEspostas();
        imprimirEstatisica();
        printf("Fim do questionário!\n");
    }
}