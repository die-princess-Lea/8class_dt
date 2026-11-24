//sumata na n chisla//

#include <stdio.h>

int main(){
    int n, sum=0, i=0, num;
    printf("input n");
    scanf("%d", &n);
    
    do{
        scanf("%d", &num);
        sum=sum+num;
        i++;
        
    }while(i<n);
    
    printf("%d", sum);
    
    return 0;
    
}