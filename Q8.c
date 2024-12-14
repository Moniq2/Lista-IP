#include <stdio.h>
int main(){
    int num, i, a, e, repetir;
    do{
    printf("Digite um numero:\n");         
    scanf("%d", &num);
        if (num % 2 != 0)
        {
         for(i = 1; i < num + 2; i+= 2)
        {   
            /*Espaços*/
            for (e = 0; e < (num - i) / 2; e++) {
                printf(" ");
            }

            /*Asteriscos*/
            for (a = 1; a <= i; a++)
            {
                printf("*");
            }
            printf("\n");
        }
        for (i = num; i > 0; i -= 2)
        {
            /* Espaços */
            for (e = -1; e < (num - i) / 2; e++) {
                printf(" ");
            }

            /*Asteriscos*/
            for (a = 3; a <= i; a++)
            {
                printf("*");
            }
            printf("\n");
        }
    } else {
        printf("Digite um numero impar!\n\n");
    }
    printf("Deseja fazer novamente? Digite 1 para repetir e 0 para finalizar. \n");
    scanf("%d", &repetir);
    } while(repetir == 1);
    return 0;
}
