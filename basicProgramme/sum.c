#include <stdio.h>

int main(){
    int sum=0, prod=1,rem,n;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem;
        prod=prod*rem;

    }
    printf("sum=%d,prod=%d",sum,prod);
    return 0;
}