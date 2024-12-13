#include <stdio.h>

/* 5. Escrever um algoritmo que lê 10 valores, um de cada vez, e conta quantos deles estão no  intervalo [10,20] e quantos deles estão fora do intervalo, escrevendo estas informações. 
 */
int main(){
    int num, numIntervalo, numFintervalo;
    numIntervalo = 0;
    printf("Digite 10 numeros: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        if (num >=10 && num <=20)
        {
           numIntervalo++;
        } else {
            numFintervalo++;
        }
        
    }
    printf("Ha %d numeros entre 10 e 20 e %d numeros fora desse intervalo.", numIntervalo, numFintervalo);
    return 0;
}
