#include <stdio.h>
int fact_non_trail(int n);
int fact_trail(int n);
int a=1;
int main(){
    int n,k,m;
    scanf("%d",&n);    
    k=fact_non_trail(n);
    printf("%d\n",k);
    m = fact_trail(n);
    printf("%d",m);
    return 0;
}

int fact_non_trail(int n)
{
    if ((n==1)||(n==0))
    {
        return 1;
    }
    else 
    return n*fact_non_trail(n-1);
}

int fact_trail(int n)
{
    
    if ((n==1)||(n==0))
        return a;
    else
    {
        a=a*n;
        return fact_trail(n-1);
        
    }
}