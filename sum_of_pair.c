#include <stdio.h>
int main() {
    int i,j,n,num,sum,mid;
    int a[100];
    scanf("%d%d",&n,&num); //input the size of array and the sum
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    if (n%2==0)
        mid=n/2;
    else mid=(n+1)/2;
    for(i=0;i<mid;i++){
        for (j=i+1;j<n;j++){
            sum=a[i]+a[j];
            if(sum==num){
                printf(" (%d, %d) ", a[i],a[j]);
            }
        }
    }
    
    return 0;
}
