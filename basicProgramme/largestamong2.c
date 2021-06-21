#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the 2 numbers");
    scanf("%d %d",&a,&b);
    if (a>b)
        printf("%d is largest",a);
    else if(b>a)
        printf("%d is largest",b);
    else
        printf("they are equal");
    return 0;
}