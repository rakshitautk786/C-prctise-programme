#include <stdio.h>
int split(int n);

int main(){
    int n,k;
    scanf("%d",&n);
    split(n);
    
    return 0;
}
int split(int n)
{
    int quo, rem;
    rem=n%10;
    quo=n/10;
    if (n == 0)
        return 0;

    
    printf("%d\n",rem);
    return split(quo);
     
    
   
}