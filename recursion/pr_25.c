#include <stdio.h>
int sum=0;
int fact(int i, int n);
int main(){
    int n,k;
    scanf("%d",&n);
    k=fact(1, n);
    if (n==k)
        printf("Perfect Number");
    else 
        printf("not a Perfect Number");
    return 0;
}
int fact(int i, int n)
{
    if(i==n)
        return sum;
    else if(n%i==0)
        sum=sum+i;
    
    fact(i+1,n);
}

