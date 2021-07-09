#include <stdio.h>
int split(int n);
int rev=0;
int main(){
    int n,k;
    scanf("%d",&n);
    k=split(n);
     printf("%d\n",k);
    return 0;
}
int split(int n)
{
    int quo, rem;
    rem=n%10;
    quo=n/10;
    if (n == 0)
        return rev;

    rev=rev*10+rem;
    
    return split(quo);
     
    
   
}