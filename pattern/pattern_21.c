// 1010101
// 010101
// 10101
// 0101
// 101
// 01
// 1
    #include <stdio.h>
    
    int main(){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<=n-i;j++)
            {
                
                    if(i%2==0)
                    {
                        if (j%2==0)
                            printf("0");
                        else
                            printf("1");
                    }
                    else
                    {
                        if(j%2==0)
                        
                            printf("1");
                        
                        else
                            printf("0");
                    }      
                
              
            }
            printf("\n");
        }
        return 0;
    }