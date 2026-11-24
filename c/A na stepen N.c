//a na stepem n//

#include <stdio.h>

int main(){
    int a, n, isNegative=0, aPowN=1, i=0;
    
    do{
    printf("input a");
    scanf("%d", &a);
    
    }while(a==0);
    
    printf("input n");
    scanf("%d", &n);
    
    if(n<0){
        isNegative=1;
        n=-n;
        
    }
    
    do{
        aPowN=aPowN*a;
        i++;
        
    }while(i<n);
    
    if(isNegative==1){
        printf("output %d", 1/aPowN);
    }else{
        printf("output %d", aPowN);
    }
    
    
    
    return 0;
}