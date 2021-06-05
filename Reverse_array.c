#include <stdio.h>

int main()
{
    int arr[10],i,j,temp,n;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);   
    }
    j=n-1;
    for(i=0;i<n/2;i++){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j--;
    }
    for (i=0;i<n;i++){
        printf("%d ",arr[i]);   
    }
    return 0;
}
