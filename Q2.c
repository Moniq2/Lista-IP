#include<stdio.h>

/*2. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce
3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão
necessários para que Zé seja maior que Chico.*/

int main(){
    float chico, ze;
    int anos;
    chico = 1.5;
    ze = 1.1;
    anos = 0;
    while (chico > ze)
    {
       chico += 0.02;
       ze += 0.03;
       anos++;
    }
    printf("Seraum necessarios %d anos", anos);
    return 0;
}