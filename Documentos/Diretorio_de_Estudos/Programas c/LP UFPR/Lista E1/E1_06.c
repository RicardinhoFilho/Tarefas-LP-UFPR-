/*Faça um programa que leia uma lista de números inteiros terminados por 0, para cada número lido o 
programa deve informar o número e se o número é par ou ímpar. Não utilize vetores/matrizes.*/

#include <stdio.h>

int main (){

    int num = 1;
    

   while (num)
   {
       
       scanf ("%d", &num);
       int teste_pi =  (num % 2);
      
        if (num == 0)
        {
            continue;
        }else if (teste_pi == 0)
        {
                printf("%d par", num);
        }else
        {
                printf("%d impar", num);
        }
        
        printf ("\n");

   } 
   
    

}