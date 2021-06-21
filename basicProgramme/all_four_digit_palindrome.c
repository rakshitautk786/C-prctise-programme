#include <stdio.h>

int main(){
    int rem,rev,temp;
    
    
    for(int i=1000;i<=9999;i++){
        temp=i;
        
        rev=0;
    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        
        temp=temp/10;
       
    }
    
    if (i==rev)
        printf("%d\t",i);
    
    }
    return 0;
}

