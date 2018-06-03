#include<stdio.h>
int main()
{
	int i;
	float sum=0,n;
	for(i=1;i<=12;i++)
	{
		scanf("%f",&n);
		sum+=n;
	}
	printf("%.2f",sum/12);
	return 0;
}
