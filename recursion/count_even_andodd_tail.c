#include <stdio.h>
int count=0;
int count1=0;
int odd(int a,int b);
int even(int a,int b);
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    odd(a,b);
    printf("%d\n",count);
    even(a,b);
    printf("%d",count1);
    return 0;
}
int odd(int a,int b)
{
    if ((a>=b)&&(a%2==0))
        return 0;
    else if(a%2!=0)
    {
        count+=1;
       
        return odd(a+1,b);

    }
    else
    {
        return odd(a+1,b);
    }
}

int even(int a,int b)
{
    if ((a>=b)&&(a%2!=0))
        return 0;
    else if(a%2==0)
    {
        count1+=1;
       
        return even(a+1,b);

    }
    else
    {
        return even(a+1,b);
    }
}