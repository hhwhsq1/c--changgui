#include<stdio.h>
int main()
{
	int n,i,j;
	char c='*';
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%c",c);
		printf("\n");
	}
	return 0;
}
