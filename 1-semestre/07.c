/*
Trabalho de fim de semestre - 2º Engenharia da Computação - UNITAU - Prof. Luis Eduardo
Arquivo: 7.c
Autor: Caíque de Castro S. Silva, Giovanna Alves dos Santos e João Victor Guedes
Objetivo: Exiba todos os números pares dentro da seguinte faixa: 53 até 521.
*/

#include <stdio.h> //para printf()

int main() {
    //declaração de variáveis
    int numero;
    //atribuir valor inicial
    numero = 53;
    //realizar a iteração
    while(numero < 521){
    	//faz a verificação de números pares
        if(numero % 2 == 0) {
            printf("%d\n",numero);//imprime se for par
        }
        numero++;//incrementa a contagem
    }
    return 0;
}