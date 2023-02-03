#include<stdio.h>
int fibonacci(int);
int main()
{
	int f,n,i;
	printf("enter the no.of terms:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	 f=fibonacci(i);
	printf("fibonacci=%d\n",f);	
	}
}
int fibonacci(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return(fibonacci(n-1)+fibonacci(n-2));
	}
}

