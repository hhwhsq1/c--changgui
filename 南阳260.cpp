#include<stdio.h>
int main()
{
	int n,sum,m,i,t;
	scanf("%d",&n);
	while(n--)
	{
		sum=0;t=0;
		scanf("%d",&m);
		for(i=1;i<=m;i++)
			t+=i,sum+=t;
		printf("%d\n",sum);
	} 
	return 0;
}
