#include <stdio.h>
int sum=0;
int add_fib();

int main(){
    printf("%d",add_fib());
    return 0;
}
int add_fib()
{
    int no;
    scanf("%d",&no);

    if (no==-1)
        return sum;

    sum=sum+no;
    add_fib();
    }