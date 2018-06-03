#include<stdio.h>
int main()
{
	int n,m,i,j,c,a;
	scanf("%d",&n);
	while(n--)
	{
		c=0;
		scanf("%d%d",&m,&a);
		for(i=m;i>1;i--)
		{
			j=i;
			while(!(j%a))
			{
				j/=a;
				c++;
			}
		}
		printf("%d\n",c);
	}
	return 0;
}
