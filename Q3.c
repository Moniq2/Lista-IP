#include<stdio.h>

/* 3. Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. Mostre o  resultado. 
 */

int main()
{   int i, maior, menor, valor, repetir;
    repetir = 1;
    while (repetir == 1)
    {
    
    printf("Digite os 50 valores\n");
    scanf("%d", &maior);
    menor = maior;

        for (i = 1; i < 50; i++)
        {
        scanf("%d", &valor);

            if (valor > maior)
            {
                maior = valor;
            }
            if (valor < menor)
            {
                menor = valor;
            }
    }
    printf("O maior valor e: %d, e o menor valor e %d\n\n Deseja repetir? Digite 1 se sim e qualquer numero para finalizar \n", maior, menor);
    scanf("%d", &repetir);
    }
    return 0;
}