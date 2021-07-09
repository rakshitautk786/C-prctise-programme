#include <stdio.h>
int count_digit(int n);
int count=0;
int main(){
    int n,k;
    scanf("%d",&n);
    count_digit(n);
   

    return 0;
}
int count_digit(int n)
{
int rem,quo,k;

    rem=n%10;
    quo=n/10;
    if (n==0)
        return count;
    else
    {
        count+=1;
        count_digit(quo);
    }

    printf("%d",k);
}