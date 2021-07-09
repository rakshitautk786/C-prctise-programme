#include <stdio.h>
int fun(int n);
int n;


int main(){
    scanf("%d",&n);
    
    fun(1);

    return 0;
}
int fun(int k)
{
    
    

    if (k==(n+1))
        return 0;
    else 
    {
         fun(k+1);
         printf("%d\n",k);
    }
}