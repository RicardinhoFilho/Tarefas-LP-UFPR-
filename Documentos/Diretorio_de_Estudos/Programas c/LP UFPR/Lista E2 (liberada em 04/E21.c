/*E21) Faça um programa que leia 6 números que representem respectivamente os valores 
de hora1, minuto1, segundo1, hora2, minuto2 e segundo2. 
O programa deve verificar as entradas para que hora seja informada entre 0 e 23, minutos e segundos de 0 a 59. 
Por fim o programa deve mostrar a diferença entre as duas entradas (a 1a menos a 2a) na forma de horas : minutos : segundos.*/

#include <stdio.h>

int main(void)
{
    int hora1,hora2,min1,min2,seg1,seg2,rh,rm,rs,aux;
    scanf("%d %d %d", &hora1,&min1,&seg1);
    scanf("%d %d %d", &hora2,&min2,&seg2);
    if (hora1>=0 && hora1<=23 && hora2>=0 && hora2<=23 && min1>=0 && min1<=59 && min2>=0 && min2<=59 && seg1>=0 && seg1<=59 && seg2>=0 && seg2<=59)
    {
        if (seg1 < seg2)
        {
            min1 -= 1;
            seg1 += 60;
        }
        if (min1 < min2)
        {
            hora1 -= 1;
            min1 += 60;
        }
        
       rh = hora1 - hora2;
       rm = min1 - min2;
       rs = seg1 - seg2;
       
       
       if (rh < 0)
       {
           rm += rh;
           rh = 0;
       }
       if (rm < 0)
       {
           rs += rm;
           rm = 0;
       }
       printf("%d:%d:%d", rh,rm,rs); 
    }
}