#include <stdio.h>
int rem();
int main(){
    

    rem();
    return 0;
}
int rem()
{
    int a,b,rema;
    scanf("%d %d",&a,&b);

    if ((a<=-1)||(b<=-1))
        return 1;

    rema=a%b;
    printf("%d",rema);

    rem();
}