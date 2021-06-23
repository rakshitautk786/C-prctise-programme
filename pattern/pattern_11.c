// 23456
// 34567
// 45678
// 56789
// 678910
    #include <stdio.h>
    
    int main(){
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=i+n;j++)
            {
                printf("%d",j);
            }
            printf("\n");
        }
        return 0;
    }