//sumata na cifrite na estestveno chislo//

#include <stdio.h>

int main(){
    int n, digitSum=0;
    printf("input n");
    scanf("%d", &n);
    
    do{
        digitSum=digitSum+n%10;
        n=n/10;
        
    }while(n>0);
    
    printf("%d", digitSum);
    
    return 0;
}