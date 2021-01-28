/*E12) Faça uma função setBit que receba dois parâmetros (nro e bit), 
 a função deve modificar o valor de nro de tal forma que o n-bit seja modificado para 1 e retornar o novo valor.

Complemente o código abaixo:*/

//https://gist.github.com/FelipeGrijo
#include <stdio.h>
//#include <conio.h>
#include <math.h>

int Primo(int numero){
    int i=0;
    int p=1;

    for(i=2;i<numero;i++){
        if(numero%i==0){
            p=0;
        }
    }
    return p;
}

int main(){
    int Num,Resultado;
    printf("Digite um numero:");
    scanf("%d",&Num);

    Resultado=Primo(Num);

    //printf("%d\n",Resultado);

    if(Resultado == 1){
        printf("Numero primo.\n");
    }
    else{
        printf("Numero nao e primo.\n");
    }

    getchar();
    return 0;
}