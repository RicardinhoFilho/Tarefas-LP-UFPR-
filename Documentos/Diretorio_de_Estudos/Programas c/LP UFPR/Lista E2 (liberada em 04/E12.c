
/*E12) Faça uma função setBit que receba dois parâmetros (nro e bit),
a função deve modificar o valor de nro de tal forma que o n-bit seja modificado para 
1 e retornar o novo valor.*/
#include <stdio.h>

int resetBit(int nro, int bit)
{
    nro ^= 1UL << bit;
    return nro;
}

int main()
{
    int num, bit;
    scanf("%d %d", &num, &bit);
    printf("%d\n", resetBit(num,bit));
}
