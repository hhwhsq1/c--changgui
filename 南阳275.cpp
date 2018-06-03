#include<stdio.h>
int main()
{
	long long int m;
	int w,i;
	while(scanf("%lld",&m)!=EOF)
	{
		int a[70]={0};w=0;
		while(m)
		{
			if(m%2==0) m/=2,w++;
			else       m-=1,a[w]=1;
		}
		for(i=w;i>=0;i--)
			printf("%d",a[i]);
		printf("\n");
	}
}
