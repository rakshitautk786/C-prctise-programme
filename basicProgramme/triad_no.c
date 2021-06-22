#include <stdio.h>

int main(){
    int a[3],flag=1,count,temp,r1,r2,r3,i,j,p;
for( j=0;j<3;j++)
 {
     scanf("%d",&a[j]);
     
 }
 
 for (i=0;i<3;i++)
 {
     r1=0;r2=0;r3=0;
    count=0;
    temp=a[i];
     while(temp!=0)
     {
         
         count++;
          temp=temp/10;
     }
    r1=a[i]%10;
    p=a[i]/10;
    r2=p%10;
    r3=a[i]/100;
   

    
    
    if ((count!=3)||(r1==r2)||(r1==r3)||(r2==r3))
    {
        printf(" not valid");
        flag=0;
        break;
    }

 }
 
if (flag==1)
{
    if((a[1]!=a[0]*2)||(a[2]!=a[0]*3))
    {
        printf("not valid");
        flag=0;
    }
 }
 if (flag==1)
 {
     printf("no. is traid");
 }
 
    return 0;
 }