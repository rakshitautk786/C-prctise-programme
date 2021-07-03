// ***********
//  ***********
//   ***********
//    ***********
//     ***********
    #include <stdio.h>
    
    int main(){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            for(int sp=1;sp<=i;sp++)
                printf(" ");
            for(int j=1;j<=11;j++)
            
                printf("*");          
            
            printf("\n");
        }
        return 0;
    }