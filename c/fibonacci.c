//fibonachi//

#include <stdio.h>

int main(){
    int n=0, f1=0, f2=1, nextF=-1, i=2;
    
    do{
        printf("input n");
        scanf("%d", &n);
        
    }while(n<=2);
    
    printf("0\n1\n");
    
    do{
        nextF=f1+f2;
        f1=f2;
        f2=nextF;
        i=i+ 1;
        printf("%d\n", nextF);

        
    }while(i<=n);
    
    
    return 0;
}