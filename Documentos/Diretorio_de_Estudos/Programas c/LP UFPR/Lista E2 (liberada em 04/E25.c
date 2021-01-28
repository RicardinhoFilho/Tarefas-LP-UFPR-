//E25) Faça um programa que leia dois valores inteiros (A e B) e apresente o resultado da operação de A elevado a B.

#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    for (int i = 1; i < B; i++)
    {
        A*= A;
    }
    
    printf("%d", A);
    
}