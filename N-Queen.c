#include<stdio.h>
#include<stdbool.h>
# define n 8
bool isvalid(int x[n][n],int r,int c);
void display(int x[n][n]);
bool show(int x[n][n],int r);

bool isvalid(int x[n][n],int r,int c)
{
    int i,j;
    for(j=c;j>=0;j--)
    {
        if(x[r][j]) return false;
    }

    for(i=r;i>=0;i--)
    {
        if(x[i][c]) return false;
    }

    for ( i = r,j=c; i>=0 && j<n; i--,j++)
    {
       if(x[i][j]) return false;
    }

    for(i=r,j=c;i>=0 && j>=0;i--,j--)
    {
        if (x[i][j]) return false;
    }

    return true;
}





bool show(int x[n][n],int r)
{
    if (r==n)
        return true;

    for (int j=0;j<n;j++)
    {
        if(isvalid(x,r,j))
        {
            x[r][j]=1;
            display(x);
            if(show(x,r+1)) return true;

            display(x);
            x[r][j]=0;
        }

    }
    return false;
}




void display(int x[n][n])
{
    for(int i=0;i<n;i++)
    {
        printf("\n\t");
        for(int j=0;j<n;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}



void main()
{
    
   
    int x[n][n];
    
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            x[i][j]=0;
        }
    }
    show(x,0);
}

