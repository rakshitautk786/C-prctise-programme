#include <stdio.h>
int prime(int a,int b,int i);
int main(){
    int a,b;
     scanf("%d%d",&a,&b);
     prime(a,b,a/2);
    return 0;
}

int prime(int a,int b,int i)
{
    if(a>=b)
    {
        return 0;
    }
    else if (a==1)
    {
        printf("%d\n",a);
        return prime(a+1,b,(a+1)/2);
    }
    else if ((i==1))
    {
        printf("%d\n",a);
        return prime(a+1,b,(a+1)/2);
    }
    else if(a%i==0)
    {
        return prime(a+1,b,(a+1)/2);
        
    }
    prime(a,b,i-1);
    
   
}