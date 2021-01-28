/*E10) Faça um programa que leia uma lista de números inteiros terminados por 0, 
para cada número lido o programa deve informar o número e se o número é par ou ímpar. Não utilize vetores/matrizes.

output
N classificação

Onde N é o número lido e classificação deve ser "par" ou "impar" sem acentos.*/

#include <stdio.h>

int main()
{
    int n = 1;
    while (n)
    {
        scanf("%d",&n);
        if (n)
        {       
                if (n%2 == 0)
            {
                printf("%d par\n", n);
            }else
            {
                printf("%d impar\n", n);
            }
        }
     }
}