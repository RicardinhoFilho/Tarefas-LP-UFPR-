// E08) Faça um programa que leia 10 números inteiros e apresente o maior (não utilize vetor/matriz).
#include <stdio.h>
int main()
{
    int maior,aux;
    scanf("%d", &aux);
    maior = aux;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &aux);
        if (maior < aux)
        {
            maior = aux;
        }
    }
    printf("%d",maior);
    
}