#include <stdio.h>
void toh(int n,char from_peg,char to_peg,char aux_peg);
int main(){
    int n ;
    scanf("%d",&n);
    toh(n,'A','C','B');
    return 0;
}

void toh(int n,char from_peg,char to_peg,char aux_peg)
{
    if (n==1)
    {
        printf("Move disk 1 from %c to %c\n",from_peg,to_peg);
    }

    else
    {
    toh(n-1,from_peg,aux_peg,to_peg);
    printf("Move disk %d from %c to %c\n",n,from_peg,to_peg);
    toh(n-1,aux_peg,to_peg,from_peg);
    }
    
}