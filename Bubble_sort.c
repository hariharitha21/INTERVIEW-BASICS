#include<stdio.h>
int main(){
    int i,j,n,arr[100],temp;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    //----------------------------Sorting starts here
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (i=0;i<n;i++)
        printf("%d",arr[i]);
}
