/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 8.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Fazer a somatória de todos os números pares e ímpares dentro da seguinte
faixa: 1 até 555 (inclusive). Exibir o somatório total dos pares e dos ímpares.
*/

#include <stdio.h> //para printf()

int main() {
    //declaração de variaveis
    int soma_par=0, soma_impar=0, numero;
    //realizar iterações
    for(numero=1;numero<=555;numero++) {
        if(numero%2 == 0) {
            soma_par += numero; //soma ao valor agregado se for par
        } else {   
            soma_impar += numero; //soma ao valor agregado se for impar
        }
    }
    //exibir resultado
    printf("Soma total dos pares: %d.\nSoma total dos impares: %d.\n",soma_par,soma_impar);
    
    return 0;
}
