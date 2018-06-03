#include<stdio.h>
int main()
{
	int n,m,max,a,b;
	while(scanf("%d",&n)&&n)
	{
		max=0;
		while(n--)
		{
			scanf("%d%d",&a,&b);
			if(max<(a+b)) max=a+b;
		}
		printf("%d\n",max);
	}
	return 0;
}
