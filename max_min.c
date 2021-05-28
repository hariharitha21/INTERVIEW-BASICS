#include <stdio.h>
int main() {
    int i,j,n,min,max;
    int arr[100]; //you can change the size as your need
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    min=arr[0];
    max=arr[0];
    for(i=1;i<n;i++){
        if (arr[i]<min)
            min=arr[i];
        else if (arr[i]>max)
            max=arr[i];
    } 
    printf("The largest number is %d\n",max);
    printf("The smallest number is %d\n",min);
    return 0;
}
