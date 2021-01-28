
/*E09) Faça um programa que leia um número de ponto flutuante e apresente 
em linhas separadas a parte inteira e a parte fracionária.

Na parte fracionário, usem %.3f e a qurba de linha na saída.*/

#include <stdio.h>
int main()
{
    float numero;
    scanf("%f",&numero);
    printf("%d\n", (int)numero);
    printf("%.3f\n", numero-((int)numero));
}