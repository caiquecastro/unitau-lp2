/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 9.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Fazer a somatória de todos os números pares e ímpares dentro da seguinte faixa:
555 até 1350 (inclusive). Exibir o somatório total dos pares, dos ímpares e o resultado
parcial de cada iteração.
*/

#include <stdio.h> //para printf()

int main() {
    //declarar variaveis
    int soma_par=0, soma_impar=0, numero;
    //realizar iterações
    for(numero=555;numero<=1350;numero++) {
        if(numero%2 == 0) {
            soma_par += numero;
            printf("Soma   par: %d + %d = %d.\n", soma_par-numero, numero, soma_par);
        } else {   
            soma_impar += numero;
            printf("Soma impar: %d + %d = %d.\n", soma_impar-numero, numero, soma_impar);
        }
    }
    //exibir resultado
    printf("Soma total dos pares: %d.\nSoma total dos impares: %d.",soma_par,soma_impar);
    return 0;
}