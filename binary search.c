#include<stdio.h>
int main(){
	int f,l,flag=0,n,key,i,a[100],mid;
	printf("enter the number:");
	scanf("%d",&n);
	printf("enter the key:");
	scanf("%d",&key);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	f=0;
	l=n-1;
	while(f<=l)
	{
		mid=(f+l)/2;
	}
	for(i=0;i<n;i++)
	{
		if(a[mid]==key)
		{
			flag=1;
			break;
		}
		else if(a[mid]<key)
		{
			f=mid+1;
		}
		else if(a[mid]>key)
		{
			l=mid-1;
		}
	}
	if(a[mid]==key)
	{
		print("%d is found");
	}
	else
	{
		printf("not found");
	}
	printf("a[i] is %d",a[i]);
	return 0;
}
