#include<stdio.h>
int main(){
	int rev,sum,n;
	printf("ente the number:");
	scanf("%d",&n);
	while(n>0){
		rev=n%10;
		sum=sum%10+n;
		n=n/10;
		printf("%d",rev);
	}
}
