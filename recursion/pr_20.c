#include <stdio.h>
int count_digit(int n);
int count=0;
int main(){
    int n,k;
    scanf("%d",&n);
    k=count_digit(n);
   printf("%d",count);

    return 0;
}
int count_digit(int n)
{
int rem,quo;

    rem=n%10;
    quo=n/10;
    if (n==0)
        return 0;
    count+=1;
    count_digit(quo);
    printf("%d",count);
}