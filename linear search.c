#include<stdio.h>
int main()
{
	int i,key,flag=0;
	int a[]={10,20,30,40};
	printf("enter the key:");
	scanf("%d",&key);
	for(i=1;i<4;i++)
	{
	if(a[i]==key)
	{
		flag=1;
		break;
	}
}
	if(flag==1)
	{
		printf("key is found");
	}
	else
	{
		printf("key is not found");
	}
	return 0;
}
