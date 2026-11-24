//vuvejdane na n na broj chisla >123 i num%7==0//

#include <stdio.h>

int main(){
    int n, i=1, num;
    printf("input n");
    scanf("%d", &n);
    
    do{
        printf("input num");
        scanf("%d", &num);
        
        if(num%7==0 && num>123){
            printf("\noutput num: %d", num);
        }
        
        i++;
            
    }while(i<=n);
    
    return 0;
}