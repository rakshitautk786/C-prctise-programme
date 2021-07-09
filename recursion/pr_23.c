// palindrome
#include <stdio.h>
int rev(int n);
void palindrome(int n , int k);



int reverse=0;
int main()
{
    int n,k;
    scanf("%d",&n);
    k=rev(n);
    // printf("%d",k);
    palindrome(n,k);
    return 0;
}

int rev(int n)
{
    int rem,quo;
    rem=n%10;
    quo=n/10;
    if (n==0)
        return reverse;
    
    reverse=reverse*10+rem;
    return rev(quo);


}
void palindrome(int n , int k)
{
    if(n==k)
    
        printf("palindrome");
    
    else
        printf("not a palindrome");

}