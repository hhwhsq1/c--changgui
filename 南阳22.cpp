#include<stdio.h>
#include<math.h>
int main()
{
	int N,m,m1,i,f,sum,M;
	scanf("%d",&N);
	while(N--)
	{
		scanf("%d",&M);
		sum=0;
		while(M--)
		{
			f=1;
			scanf("%d",&m);
			m1=sqrt(m);
			if(m==1) continue;
			for(i=2;i<=m1;i++)
			{
			if(m%i==0) f=0;
			}
			if(f) sum+=m;
		}
		printf("%d\n",sum);
	}
}
