#include<stdio.h>
int main()
{
	long long int n,m,sum;
	while(scanf("%lld%lld",&n,&m)!=EOF)
	{
		sum=n*m*(n+1)*(m+1)/4;
		printf("%lld\n",sum);
	}
	return 0;
}
