#include <stdio.h>
int bin(int n);
int main(){
    int n;
    scanf("%d",&n);
    bin(n);
    return 0;
}

int bin(int n)
{
    int rem,quo;
    rem=n%2;
    quo=n/2;

   
    if (n==0)
        return 0;

    bin(quo);
    printf("%d",rem);

}