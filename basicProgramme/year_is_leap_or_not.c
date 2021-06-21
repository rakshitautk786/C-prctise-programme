#include <stdio.h>

int main(){
    int y;
    scanf("%d",&y);
    if (y%4==0)
    {
        if (y%400==0)
            printf("Leap Year");
        else if (y%100 ==0)
            printf("Not a leap year");
        else
            printf("leap year");
    }
    else
        printf("not a leap year");

    return 0;
}