#include <stdio.h>
#include <math.h>
int main(){
    int dec=0,n,z=0,rem;
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        n=n/10;
        
        dec=(pow(2,z)*rem)+dec;
       
        z+=1;
    }
    printf("%d",dec);
    return 0;
}