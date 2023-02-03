#include<stdio.h>
void bubble_sort(int a[])
{
	int i,j,t;
    for(i=1;i<5;i++)
    {
    	j=i;
    	while(a[j]<a[j-1] && j>0)
    	{
    		t=a[j];
    		a[j]=a[j-1];
    		a[j-1]=t;
    		j--;
		}
	}
}
int main(){
	int i,n,m,min,max;
	int a[]={20,10,12,50,40};
	bubble_sort(a);
	printf("the sorted elements are:");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("enter the n:");
	scanf("%d",&n);
	min=a[n-1];
	printf("%d is the min",min);
	printf("enter m:\n");
	scanf("%d",&m);
	max=a[5-m];
	printf("%d is the max",max);
}
