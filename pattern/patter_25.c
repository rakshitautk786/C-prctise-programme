// 1
// 2       3
// 4       5       6
// 7       8       9       10
// 11      12      13      14      15
    #include <stdio.h>
    
    int main(){
        int n,temp=1;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                
                   printf("%d\t",temp);
                   temp++; 
            }
            printf("\n");
        }
        return 0;
    }