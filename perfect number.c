#include<stdio.h>
int main(){
	int i,sum=0,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0)
		sum=sum+i;
	}
	printf("%d",sum);
	if(sum==n){
		printf("perfect number");
	}
	else
	printf("not a perfect number");
}
