#include <stdio.h>
int main() {
    int i=0,sum,total=0,res;
    int n=10; //change the value according to the question
    int arr[9];
    for(i=0;i<9;i++){
        scanf("%d",&arr[i])
    }  
    sum=(pow(n,2)+n)/2; //sum of n natural numbers
    for(i=0;i<9;i++){
        total=total+arr[i];
    }
    res=sum-total;
    printf("%d",res);
    return 0;
}
