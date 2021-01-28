//Faça um programa que leia 10 números inteiros e apresente o maior (não utilize vetor/matriz).

#include <stdio.h>

int main (){

    int numero_maior = -9999;
    int numero_digitado; 

    for (int i = 0; i < 10; i++)
    {
        
        scanf("%d", &numero_digitado);

            if (numero_digitado > numero_maior)
            {
                numero_maior = numero_digitado;
            }else
            {
                continue;
            }
   
    }
    
    printf ("%d\n", numero_maior);
    
}