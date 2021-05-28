#include<stdio.h>
int main(){
    int i,j,no,n,arr[10];
    scanf("%d",&n); //Enter the size of integer
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for (i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (arr[i] == arr[j]){
                no=arr[i];
            }
        }
    }
    printf("%d",no);
}
