// 1*3*5
// *2*4*
// 1*3*5
// *2*4*
// 1*3*5
    #include <stdio.h>
    
    int main(){
        int n,k;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
             
            for(int j=1;j<=n;j++)
            {
                if((i%2==0))
                {
                   if(j%2!=0)
                    printf("*"); 
                    else
                        printf("%d",j)  ;  
                }
                else
                {
                    if(j%2!=0)
                    printf("%d",j)  ;  
                    
                    else
                    printf("*"); 
                        
                }
                          
            }
            printf("\n");
        }
        return 0;
    }