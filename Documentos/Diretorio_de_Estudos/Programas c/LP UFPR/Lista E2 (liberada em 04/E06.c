/*E06) Faça um programa que faça a operação de swap entre as variáveis x e y, sem o uso de uma terceira variável, 
utilizando apenas operadores aritméticos.

Complemente o código abaixo ( o código abaixo deve ser informado para o farmalg):

int main( void ) {
int x=5, y=-10;
printf("x=%d y=%d\n",x,y);
//complemente este código 
printf("x=%d y=%d\n",x,y);
}*/

#include <stdio.h>
int main( void ) {
int x=5, y=-10;
printf("x=%d y=%d\n",x,y);
x = x ^ y; 
y = y ^ x; 
x = x ^ y; 
printf("x=%d y=%d\n",x,y);
}