#include <stdio.h>
int main() {
    int i,j,n,sum,k=0;
    int a[100],b[100];
    scanf("%d",&n); //input the size of array and the sum
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){
        for (j=i+1;j<n;j++){
            if (a[i]==a[j]){
               b[k]=a[i]; 
               k++;
                }
            }
        }
    for(i=0;i<k;i++)
        printf("%d ",b[i]);
    return 0;
}
