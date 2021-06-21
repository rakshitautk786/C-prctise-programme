#include <stdio.h>

int main(){
    int n,rem,count=0;
    scanf("%d",&n);
    if (n==0)
        printf("%d",count+1);
    else{
    while(n!=0)
    {
        
        n=n/10;
        count+=1;
    }
    printf("%d",count);
    }
    return 0;
}


