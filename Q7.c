#include <stdio.h>

/* 7. Números de Fibonacci: Crie um aplicativo em C que peça um número inteiro ao usuário - 'n' - e exiba o n-ésimo termo da série de Fibonacci, sabendo que o primeiro termo é 0, o  segundo é 1 e o próximo número é sempre a soma dos dois anteriores. 
Ex.: 0 1 1 2 3 5 8... Se o usuário digitar 4 o elemento da 4ª posição é o 2. */ 

int main(){
    int n, termoAnt, termoAtual, proxTermo, repetir;
    do{
        proxTermo = 0;
        termoAnt = 0;
        termoAtual = 1;
        printf("Digite um numero inteiro:\n");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Digite um termo valido. \n\n");

        } else if (n == 2) {
        printf("\nO %d-esimo elemento e: 1. \n\n", n);
        } else {
            for (int i = 2; i < n; i++)
            {
                proxTermo = termoAtual + termoAnt;
                termoAnt = termoAtual;
                termoAtual = proxTermo;
            }
            printf("\nO %d-esimo elemento e: %d. \n\n", n, proxTermo);
        }
        printf("Deseja fazer novamente? Digite 1 se sim, 0 se nao: \n");
        scanf("%d", &repetir);
    } while(repetir == 1);
    return 0;
}
