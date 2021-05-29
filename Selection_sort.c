#include<stdio.h>
int main(){
    int i,j,n,arr[100],temp,min;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        min=i;
        //find the minimum number in the array
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        //swap
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        }
    }
    for (i=0;i<n;i++)
        printf("%d",arr[i]);
}
