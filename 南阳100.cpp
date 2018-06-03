#include<stdio.h>
int main()
{
	int n,m,t;
	scanf("%d",&n);
	while(n--)
	{
		t=0;
		scanf("%d",&m);
		while(m)
		{
			if(m%2==0) m/=2;
			else       m-=1,t++;
		}
		printf("%d\n",t);
	}
} 
