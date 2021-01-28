/*Faça um programa que leia um número de ponto flutuante 
e apresente em linhas separadas a parte inteira e a parte fracionária.*/

#include <stdio.h>

int main (){

    double num;

    scanf ("%lf", &num);

    printf ("%d\n", (int)num); 

    printf ("%lf\n", num - ((int)num));

}