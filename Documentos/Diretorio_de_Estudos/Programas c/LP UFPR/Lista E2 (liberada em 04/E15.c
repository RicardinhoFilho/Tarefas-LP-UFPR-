/*Faça um programa que leia dois números inteiros e 
apresente o MAIOR DIVISOR COMUM entre os dois números.*/

#include <stdio.h>

int main(void)
{
    int num1, num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    for (int i = num1; i > 0; i--)
    {
        if (num1 % i == 0)
        {
            if (num2 % i == 0)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
}
