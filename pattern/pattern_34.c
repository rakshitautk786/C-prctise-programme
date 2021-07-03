// 02345
// 10345
// 12045
// 12305
// 12340

    #include <stdio.h>
    
    int main(){
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
             
            for(int j=1;j<=n;j++)
            {
                if(i==j)
                        printf("0");
                else
                    printf("%d",j);          
            }
            printf("\n");
        }
        return 0;
    }