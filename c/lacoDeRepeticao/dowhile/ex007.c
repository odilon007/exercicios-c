
#include <stdio.h>

/*
Escreva um programa que calcule o fatorial de um número inteiro lido, sabendo-se que:
N ! = 1 x 2 x 3 x ... x N-1 x N
0 ! = 1
*/

int main()
{
    int num, fatorial=1;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (num == 1 || num == 0) {
        printf("O fatorial de %d! eh igual a: %d", num, fatorial);
        return 0;
    }
    
    while (num > 1) {
        fatorial *= num;
        num--;
    }
    
    printf("O fatorial de %d! eh igual a: %d", num, fatorial);
    
    return 0;
}