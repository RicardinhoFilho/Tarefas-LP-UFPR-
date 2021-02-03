/*Faça uma função resetBit que receba dois parâmetros (nro e bit), a função deve modificar o valor de nro de tal forma que o n-bit seja modificado para 0 e retornar o novo valor.

Complemente o código abaixo:

int resetBit(int nro, int bit)
{
// complemente o código
}

int main(void) {
int num,bit;
scanf("%d %d",&num,&bit);
printf("%d\n",resetBit(num,bit));
}*/

#include <stdio.h>

int resetBit(int nro, int bit)
{
    nro ^= 1 << bit;
    return nro;
}

int main()
{
    int num, bit;
    scanf("%d %d", &num, &bit);
    printf("%d\n", resetBit(num,bit));
}
