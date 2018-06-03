#include<stdio.h>
int main()
{
	int a,b,a1,b1;
	while(scanf("%d%d",&a,&b)&&(a||b))
	{
		a1=0;b1=0;
		while(a)
		{
			a1=a1*10+a%10;a/=10;
		}
		while(b)
		{
			b1=b1*10+b%10;b/=10;
		}
		printf("%d\n",a1+b1);
	}
	return 0;
}
