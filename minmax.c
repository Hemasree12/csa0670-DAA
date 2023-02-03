#include<stdio.h>
int main(){
	int i;
	int a[]={10,1,30,20,5};
	int max=a[0],min=a[0];
	for(i=1;i<5;i++){
		if(a[i]<min){
			min=a[i];
		}
		printf("%d\n",min);
	}
	for(i=1;i<5;i++){
		if(a[i]>max){
			max=a[i];
		}
		printf("%d\n",max);
	}
}
