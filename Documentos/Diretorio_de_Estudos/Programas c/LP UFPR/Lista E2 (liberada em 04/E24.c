/*E24) Faça um programa que leia um número de ponto flutuante e apresente o resultado do valor inteiro arredondado. 
Não use funções da biblioteca. Dica: use o cast para inteiros.
Exemplo:
Input:
3.9
Output
4*/

#include <stdio.h>

int main ()
{
    double num;
    int arredonda;
    scanf("%lf", &num);
    arredonda = (int)num;
    if ((num - arredonda) >= 0.5)
    {
        arredonda += 1;
    }
    printf("%d", arredonda);

}