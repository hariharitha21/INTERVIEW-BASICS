#include <stdio.h>
int main()
{
    int i,n,a,b,c;
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d",a);
    printf(" %d",b);
    for (i=0;i<n-2;i++){
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }

    return 0;
}
