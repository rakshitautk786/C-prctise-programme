#include <stdio.h>

int sum=0;
int add_digit(int n);

int main()
{
    int n,k;
    scanf("%d",&n);
    
    printf("%d",add_digit(n));
return 0;
}

int add_digit(int n)
{
    int rem,quo;
    rem = n%10;
    quo=n/10;
    if (n==0)
        return sum;
    
    sum=sum+rem;
    add_digit(quo);
}