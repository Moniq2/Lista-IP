#include<stdio.h>  

/* 1. Escrever um algoritmo que lê 5 valores para a, um de cada vez, e conta quantos destes
valores são negativos, escrevendo esta informação. */

int main(){
    int i, j, negativ;
        for(i=0;i<=5;i++){
            scanf("%d", &j);
            if (j < 0)
            {
                negativ++;
            }
        }
        printf("%d", negativ);
    return 0;
}
 
