//broi na cifrite v estestveno chislo//

#include <stdio.h>

int main(){
    int n, digitCount=0;
    printf("input n");
    scanf("%d", &n);
    
    do{
        digitCount=digitCount + 1;
        n=n/10;
        
     }while(n>0);
     
     printf("%d", digitCount);
    
    return 0;
    
}