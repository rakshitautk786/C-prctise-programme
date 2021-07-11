#include <stdio.h>
#include<math.h>
int digit(int n);
int sum=0;
int main(){
    int n,k;
    scanf("%d",&n);
    k=digit(n);
    if (n==k)
        printf("Armstrong Number");

    else
        printf("not a armstrong");
    return 0;
}
int digit(int n)
{
    int rem,quo;
    rem= n%10;
    quo=n/10;
    if (n==0)
        return sum;

    sum=sum+pow(rem,3);
    digit(quo);
} 