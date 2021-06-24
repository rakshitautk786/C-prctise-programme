// 0
// 1 1
// 2 3 5
// 8 13 21 34
    #include <stdio.h>
    
    int main(){
        int n,a=0,b=1,c;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                
                    
                    printf("%d\t",a);
                    c=a+b;
                    a=b;
                    b=c;
                    
                           
                
              
            }
            printf("\n");
        }
        return 0;
    }