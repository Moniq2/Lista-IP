#include<stdio.h>

/* 3. Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. Mostre o  resultado. 
 */

int main(){
    int num, maior, menor;
    menor = 0;
    maior = 0;
    for (int i = 0; i <= 5; i++)
    {
        scanf("%d", &num); 

        if (num > maior)
        {
           maior = num;
        } 

         menor = maior;
         
         if (num < menor)
        {
           menor = num;
        }
    }
    
    printf("O maior numero eh %d e o menor numero eh %d", maior, menor);
    
    return 0;
}