
#include <stdio.h>
int main()
{
    int r,m,n,sum=0;
    scanf("%d",&n);
    m=n;
    while (n>0){
        r=n%10;
        sum=sum+(r*r*r); \\or you can use the pow() function.
        n=n/10;
    }
    if (sum==m){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
