#include <stdio.h>

/* 4. Escrever um algoritmo que leia um número n que indica quantos valores devem ser lidos a
seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial deste
valor. */

int main(){
    int n, num, fatorial;
    printf("Digite quantos numeros vc deseja calcular o fatorial\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        scanf("%d", &num);

        fatorial = num;

        /* Calcular fatorial */
        for (int j = num - 1; j > 0; j--)
        {
            fatorial *= j;
        }
        printf("numero: \t fatorial: \n %d \t\t %d", num, fatorial);
    }


    
    return 0;
}