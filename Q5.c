#include <stdio.h>

/* 5. Escrever um algoritmo que lê 10 valores, um de cada vez, e conta quantos deles estão no  intervalo [10,20] e quantos deles estão fora do intervalo, escrevendo estas informações. 
 */
int main(){
    int num, numIntervalo, numFintervalo, repetir;
    repetir = 1;
    while(repetir == 1){
    numFintervalo = numIntervalo = 0; 
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
    printf("Ha %d numeros entre 10 e 20, \nHa %d numeros fora desse intervalo.\n\nDeseja fazer novamente? Se sim, digite 1, se quiser finalizar, digite 0.\n", numIntervalo, numFintervalo);
    scanf("%d", &repetir);
    }
    return 0;
    
}
