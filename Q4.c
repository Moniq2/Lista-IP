#include <stdio.h>

/* 4. Escrever um algoritmo que leia um número n que indica quantos valores devem ser lidos a
seguir. Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial deste
valor. */

int main(){
    int n, num, fatorial, repetir;
    repetir = 1;
    while(repetir == 1){
    printf("Digite a quantidade de numeros para os quais vc deseja calcular o fatorial:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Digite o numero para o qual vc deseja calcular o fatorial:\n");
        scanf("%d", &num);

        fatorial = num;

        /* Calcular fatorial */
        for (int j = num - 1; j > 0; j--)
        {
            fatorial *= j;
        }
        printf("numero: \t fatorial: \n %d \t\t %d\n", num, fatorial);
    }
        printf("Gostaria de repetir?\n Digite 1 se sim, e 0 para finalizar.\n");
        scanf("%d", &repetir);
    }

    
    return 0;
}