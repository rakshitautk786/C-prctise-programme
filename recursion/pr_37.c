#include <stdio.h>
int count=0;
int count_prime(int l,int u,int i);
int main(){
    int l,u,k;
    scanf("%d%d",&l,&u);
    k=count_prime(l+1,u,(l+1)/2);
    printf("%d",k);
    return 0;
}

int count_prime(int l,int u,int i)
{
    if(l>=u)
    {
        return count;
    }
    else if (i==1)
    {
        count+=1;
        return count_prime(l+1,u,(l+1)/2);
    }

    else if(l%i==0)
        return count_prime(l+1,u,(l+1)/2);
    
   
    count_prime(l,u,i-1);
}


