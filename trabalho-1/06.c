/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 6.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Exibir todos os números de 255 até 555.
*/

#include <stdio.h> //para printf()

int main() {
    //declaração de variaveis
    int numero;
    //atribuir valor de início
    numero = 255;
    //realizar a iteração
    while(numero <= 555){ 
        printf("%d\n", numero++);//imprime o valor
    }
    return 0;
}