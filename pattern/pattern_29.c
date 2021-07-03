 // 0
// 12
// 340
// 1234

    #include <stdio.h>
    
    int main(){
        int n,temp=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                
                  if(temp>4)
                  {
                      temp=0;
                      printf("%d",temp);
                      temp++;
                  }
                  else{
                      printf("%d",temp);
                      temp++;
                  }

            }
            printf("\n");
        }
        return 0;
    }