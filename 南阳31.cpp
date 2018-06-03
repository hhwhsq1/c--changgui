#include<stdio.h>
int main()
{
	int a[5],i,d,x;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	d=a[0];x=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]>d) d=a[i];
		if(a[i]<x) x=a[i];
	}
	printf("%d %d",x,d);
}
