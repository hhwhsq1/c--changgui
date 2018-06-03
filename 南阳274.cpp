#include<stdio.h>
#define PI 3.1415926
int main()
{
	int n;
	double l,a;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%lf",&l);
		a=PI*l*l/3.0;
		printf("%.2lf\n",a);
	}
	return 0;
}
