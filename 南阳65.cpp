#include<stdio.h>
int main()
{
	int n,m,i,j,k;
	long long int sum,t;
	scanf("%d",&n);
	while(n--)
	{
		sum=0;
		scanf("%d",&m);
		for(i=1;i<=m;i++)
		{
			t=1;
			if(i%2==0) k=i-1;
			else       k=i;
			for(j=k;j>=1;j-=2)
			{
				t*=j;
			}
			sum+=t;
		}
		printf("%lld\n",sum);
	}
}
