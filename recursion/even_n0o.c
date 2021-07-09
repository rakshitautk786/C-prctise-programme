#include <stdio.h>
int even(int a,int b);
int odd(int a,int b);

int table(int n, int p);
int main()
{
    int a,b,n,p=1;
   
    scanf("%d%d",&a,&b);
    even(a,b);
    odd(a,b);

    scanf("%d",&n);
    printf("Enter number to print table");
    table(n, p);
    return 0;
}

int even(int a,int b)
{
    if ((a>=b)&&((a%2)!=0))
    {
        return 0;
    }
    else if((a%2)==0)
    {
        printf("even : %d\n",a);
      
    }
    
    return even(a+1,b);
}

int odd(int a,int b)
{
    if ((a>=b)&&((a%2)==0))
    {
        return 0;
    }
    else if((a%2)!=0)
    {
        printf(" odd: %d\n",a);
      
    }
    
    return odd(a+1,b);
}


int table(int n, int p)
{
    if (p>10)
    {
        return 0;
    }
    else
    {
        printf("Table : %d\n",(n*p));
        return table(n,p+1);
    }
}





