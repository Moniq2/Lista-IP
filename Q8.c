#include<stdio.h>
int main(){
    int i, j;
    scanf("%d", &j);
    for (i = 0; i <= j-1; i++)
    {
      for (int k = 0; k < i; k++)
      {
        printf("*");
    }
    printf("\n");
    } 


     for (i = 0; i <= j; i++)
    {
      for (int k = j; k > i; k--)
      {
        printf("*");
    }
    printf("\n");
    } 
    
    return 0;
}