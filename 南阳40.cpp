#include<stdio.h>
int main()
{
	int n,a,b,r,a1,b1;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		a1=a;b1=b;
		if(a<b) r=a,a=b,b=r;
		r=a%b;a=b;b=r;
		while(r!=0)
		{
			r=a%b;a=b;b=r;
		}
		a1=a1*b1/a;
		printf("%d %d\n",a,a1);
	}
	return 0;
}
