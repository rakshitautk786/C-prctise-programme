// 5
// 45
// 345
// 2345
// 12345
    #include <stdio.h>
    
    int main(){
        int n;
        scanf("%d",&n);
        for(int i=5;i>=1;i--)
        {
            for(int j=i;j<=n;j++)
            {
                printf("%d",j);
            }
            printf("\n");
        }
        return 0;
    }