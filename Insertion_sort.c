#include <stdio.h>
int main() {
    int i,j,key,arr[100],n;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
  printf("Unsorted Array:");
  for (i=0;i<n;i++)
        printf("%d",arr[i]);
    for (i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    printf("Sorted Array:");
     for (i=0;i<n;i++)
        printf("%d\t",arr[i]);
}
