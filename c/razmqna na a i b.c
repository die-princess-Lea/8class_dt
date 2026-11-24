#include <stdio.h>

int main(){
    int a, b, c;
    printf("a, b");
    scanf("%d", &a);
    scanf("%d", &b);
    
    c=a;
    a=b;
    b=c;
    
    printf("%d ", a);
    printf("%d", b);

    return 0;
}