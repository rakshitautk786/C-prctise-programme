#include <stdio.h>

int main(){
    int rev=0,n,temp,rem;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if (n==rev)
        printf("%d is palindrome",n);
    else
        printf("not a palindromw");
    return 0;
}