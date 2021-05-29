#include <stdio.h>
int main() {
    int i,n,flag=0;
    scanf("%d",&n);
    if(n==1) printf("Not prime nor composite");
    else if (n>2) {
        for (i=2;i<=n/2;i++);
        {
            if (n%i==0){
            flag=1;
            
            }
        }}
        if(flag==0){
            printf("Prime");
        }
        else
            printf("Not Prime");
    
    return 0;
}
