/*Faça um programa que leia três números e os apresente em ordem crescente. 
 Imprima um número em cada linha. Não apresente texto para a leitura dos três números.
 */

#include <stdio.h>

int main()
{
    int vet_aux[3]; 
    int aux;
    int i,j;
       for ( i = 0; i < 3; i++)
       {
           scanf("%d",&vet_aux[i]);
       }
       
       
       for( i=0; i<3; i++ )
        {
 
            for( j=i+1; j<3; j++ )
            {
                 if(  vet_aux[i] > vet_aux[j] )
                    {
                       aux = vet_aux[i];
                       vet_aux[i] = vet_aux[j];
                       vet_aux[j] = aux;
                    }
                  
            }
        }
    for (i = 0; i <= 2; i++)
        {    
        printf("%d\n",vet_aux[i]);
        }
}