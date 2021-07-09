#include <stdio.h>
int loop(int n);
int main()
{
    int n;
    scanf("%d",&n);
    loop(n);
    return 0;
}

int loop(int n)
{
    if (n==0)
        return 0;
    
    else
    {
        printf("%d\n",n);
        return loop(n-1);
    }
}