#include <stdio.h>

/* 6. Crie um programa em C que peça um número inteiro ao usuário, e imprima a seguinte  tabela: 
1 
2 4 
3 6 9 
4 8 12 16 
... */ 

int main(){
    int num, repetir;
    repetir = 1;
    while (repetir == 1)
    {
    printf("Digite um numero: \n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i * j);
        } 
        printf("\n");
        
    }
    
    printf("Gostaria de repetir?\n Digite 1 se sim, e 0 para finalizar.\n");
        scanf("%d", &repetir);
    }
    
    
    return 0;
}
