#include <stdio.h>
int fact_no(int a,int b);

int main(){
    int n,i;
    scanf("%d",&n);
  fact_no(1,n);
    

    return 0;
}

int fact_no(int i,int n)
{
    if(i>n)
        return 0;
    else if(n%i==0)
    
        printf("%d\n",i);

    fact_no(i+1,n);
}