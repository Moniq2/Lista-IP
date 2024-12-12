#include <stdio.h>

/* 4. Escrever um algoritmo que leia um número n que indica quantos valores devem ser lidos a
seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial deste
valor. */

int main(){
    int n, num, fator;
    printf("Digite quantos numeros vc deseja calcular o fatorial\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        scanf("%d", &num);

        fator = num;

        /* Calcular fatorial */
        for (int i = num - 1; i > 0; i--)
        {
            fator *= i ;
        }
        printf("numero: \t fatorial: \n %d \t\t %d", num, fator);
    }


    
    return 0;
}