#include <stdio.h>
int in_word(int n);
int main(){
    int n;
    scanf("%d",&n);

    in_word(n);
    return 0;
}
int in_word(int n)
{
    int rem,quo;
    rem=n%10;
    quo=n/10;
    if(n==0)
        return 0;

    in_word(quo);

    switch (rem)
    {
    case 1:
        printf(" one ");
        break;
    case 2:
        printf(" two ");
        break;
    case 3:
        printf(" three ");
        break;
    case 4:
        printf(" four ");
        break;
    case 5:
        printf("five");
        break;
    case 6:
        printf(" six ");
        break;
    
    case 7:
        printf("seven");
        break;
    case 8:
        printf(" eight ");
        break;
    case 9:
        printf(" nine ");
        break;
     case 0:
        printf(" zero ");
        break;
    }


    
}