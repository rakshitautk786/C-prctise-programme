 // 0
// 12
// 340
// 1234

    #include <stdio.h>
    
    int main(){
        int n,temp=1;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                
                   if((i%2!=0)&&(i==j))
                   {
                        printf("0");
                        temp=0;
                        temp++;
                   }
                    else
                    {
                        printf("%d",temp);
                        temp++;
                    }
            }
            printf("\n");
        }
        return 0;
    }