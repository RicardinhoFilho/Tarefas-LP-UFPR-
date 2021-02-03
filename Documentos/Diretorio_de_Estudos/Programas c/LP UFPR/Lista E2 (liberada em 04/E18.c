/*E18) Crie uma segunda versão da função anterior, em que seja removido os zeros a esquerda da string.*/

#include <stdlib.h>
#include <stdio.h>

void func(char vet[], int num)
{
    int aux = 0;
    unsigned int valor;
    if (num < 0) /*Negativo*/
        valor = (4294967296 + num);
    else
        valor = num;

    for (aux = 31; aux >= 0; aux--)
    {
        if (valor % 2)
            vet[aux] = 49;
        else
            vet[aux] = 48;
        valor = valor / 2;
    }
    vet[32] = '\0';
}

void tira_zeros(char str[33]){
int aux = 0;
int i;
for (i = 0; i < 33; i++)
    {
        if (str[i] == '0')
        {
            aux++;
        }
        else
        {
            break;
        }
    }
    for (i = aux; i < 32; i++)
    {
        printf("%c", str[i]);
    }
}
int main(void)
{
    int num;
    
    char str[33];
    scanf("%d", &num);
    func(str, num);
    tira_zeros(str);

    
}