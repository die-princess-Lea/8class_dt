#include<stdio.h>
int main(){
    int n, i=1, factoriel=1;
    printf("input n");
    scanf("%d", &n);
    
    do{
        factoriel=n*(n- 1);
        i++;
        
    }while(i<n);
    
    printf("output %d", factoriel);
    
    return 0;
}