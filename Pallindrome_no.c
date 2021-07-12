#include <stdio.h>

int main() {
	int r,s=0,m,n;
	scanf("%d",&n);
	m=n;
	while(m>0){
	    r=m%10;
	    s=(s*10)+r;
	    m=m/10;
	}
	if(s==n){
	    printf("Yes");
	}
	else{
	    printf("No");
	}
	
	return 0;
}
