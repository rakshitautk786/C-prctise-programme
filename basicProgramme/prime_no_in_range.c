#include <stdio.h>

int main(){
    int flag;
    for (int i=1;i<=100;i++)
    {
        flag=1;
        if((i==1)||(i==2))
            flag=1;
        else{
            for(int j=2;j<i;j++)
            {
                if (i%j==0)
                {
                    flag=0;
                    break;
                }
            }
        
        }
        if (flag==1)
            printf("%d\t",i);
    }
    return 0;
}