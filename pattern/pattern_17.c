// 12345
// 22345
// 33345
// 44445
// 55555
    #include <stdio.h>
    
    int main(){
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i>=j)
                    printf("%d",i);
                else
                    printf("%d",j);
            }
            printf("\n");
        }
        return 0;
    }