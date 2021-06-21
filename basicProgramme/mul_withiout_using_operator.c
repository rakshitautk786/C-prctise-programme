#include <stdio.h>

int main(){
    int a,b,mul=0;
    scanf("%d %d",&a,&b);
    for (int i=1;i<=b;i++)
    {
        mul=mul+a;
    }
    printf("%d",mul);
    return 0;
}