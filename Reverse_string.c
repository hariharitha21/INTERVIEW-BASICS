#include<stdio.h>
#include<string.h>
int main(){
    int i,j,len,temp;
    char str1[10];
    scanf("%s",str1);
    len=strlen(str1);
    j=len-1;
    for(i=0;i<len/2;i++){
        temp=str1[i];
        str1[i]=str1[j];
        str1[j]=temp;
        j--;
    }
    printf("%s",str1);
}
