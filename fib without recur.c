#include<stdio.h>
int main()
{
	int n,i,t1=0,t2=1,nt,c,sum=0;
	printf("enter the number of terms:");
	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			nt=t1+t2;
			t1=t2;
			t2=nt;
		printf("fib series is %d\n",nt);
}
c=t1+t2;
for(i=0;i<n*2;i++){
	if(i%2==0){
		sum=sum+c;
	}
}
printf("%d",sum);
}
