#include<stdio.h>
int main()
{
	int n,m,i,j;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		for(i=1;i<=m;i++)
		{
			for(j=i;j<=9;j++)
				printf("%d*%d=%d ",i,j,i*j);
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
