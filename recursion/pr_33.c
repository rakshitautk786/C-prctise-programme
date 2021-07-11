#include <stdio.h>

int main(){
    float n,sub;
    int n1;
    scanf("%f",&n);

    n1=(int)n;
    sub=n-n1;
    if(sub>=0.5)
        printf("%d",(n1+1));
    else
        printf("%d",n1);
    
    return 0;
}