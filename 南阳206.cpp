#include<stdio.h>
int main()
{
	int n,m,i,j,sum;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		sum=0;
		for(i=1;i<=n;i++)
			for(j=1;j<=m;j++)
			{
				sum+=(n-i+1)*(m-j+1);
			}
		printf("%d\n",sum);
	}
	return 0;
}
