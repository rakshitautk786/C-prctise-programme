// 1010101
// 101010
// 10101
// 1010
// 101
// 10
// 1
    #include <stdio.h>
    
    int main(){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<=n-i;j++)
            {
                
                    if(j%2==0)
                        printf("0");
                    else
                        printf("1");
                           
                
              
            }
            printf("\n");
        }
        return 0;
    }