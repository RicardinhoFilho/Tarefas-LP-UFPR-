/*E17) Faça uma função que receba um vetor de char e um número e retorne no vetor o valores ‘0’ e ‘1’ 
correspondente ao valor binário de cada posição do número. Considere números de até 32 bits. 
(Considere o vetor com 33 posições).

Complemente o código (lembrem-se do include stdio.h):*/

#include<stdlib.h>
#include<stdio.h>



void func(char vet[], int num) {
int aux=0;
unsigned int valor;
if(num<0)/*Negativo*/
	valor=(4294967296+num);
else
	valor=num;

for (aux=31;aux>=0;aux--)
{
	if (valor%2)
		vet[aux]=49;
	else
		vet[aux]=48;
	valor=valor/2;	
}
vet[32]='\0';
}

int main(void) {
int num;
char str[33];
scanf("%d",&num);
func(str,num);
printf("%s\n",str);
return 0;
}
