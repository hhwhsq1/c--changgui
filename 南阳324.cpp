#include<stdio.h>
int main()
{
	int n,m;
	long int sum;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		sum=1;
		while(m--)
		{
			sum=(sum+1)*2;
		}
		printf("%ld\n",sum);
	}
	return 0;
}
