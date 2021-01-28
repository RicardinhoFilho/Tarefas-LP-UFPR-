 //Faça um programa que leia três números e os apresente em ordem crescente.

 #include <stdio.h>


 int main (){

     int numeros[3];
     int aux;
    for (int i = 0; i < 3; i++)
    {
        scanf ("%d", &numeros[i]);
    }
     
    for (int j = 0; j < 2;)
    {
        
        if (numeros[j] > numeros [j+1])
        {
            
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
                j--;
                //printf("->%d\n", j);

        }else
        {
            j++;
        }
        
        
        
    }
    

   for (int k = 0; k < 3; k++)
   {
       printf("%d\n", numeros[k]);
   }
   
     
}