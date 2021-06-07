#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    if (((n%4==0) &&(n%100!=0)) || (n%400==0) ){
        printf("Leap Year");
    }
    else {
        printf("Non a leap year");
    }
    return 0;
}
