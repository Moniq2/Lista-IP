#include<stdio.h>  

/* 1. Escrever um algoritmo que lê 5 valores para a, um de cada vez, e conta quantos destes
valores são negativos, escrevendo esta informação. */

int main(){
    int i, j, negativ, repetir;
    do{
        negativ = 0;
        printf("Digite 5 numeros\n");
        for(i=0;i<5;i++){
            scanf("%d", &j);
            if (j < 0)
            {
                negativ++;
            }
        }
        
        if (negativ == 1)
        {
            printf("Voce digitou %d valor negativo\n\n", negativ);
        } else if (negativ == 0)
        {
            printf("Voce nauum digitou nenhum valor negativo\n\n");
        } else 
        {
            printf("Voce digitou %d valores negativos\n\n", negativ);
        }
        printf("Gostaria de repetir?\n Digite qualquer 1 se sim, e 0 para finalizar.\n");
        scanf("%d", &repetir);
    } while(repetir == 1);
    return 0;
}
 
