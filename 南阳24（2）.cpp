#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,i,m1,j,f;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		m1=m;
		if(m==1||m==0)
		{
			printf("2 %d\n",2-m);
			continue;
		}
		for(i=0;;i++)
		{
			m1-=i;f=1;
			for(j=2;j<=sqrt(m1);j++)
			{
				if(m1%j==0)
				{
					f=0;break;
				}
			}
			if(f) 
			{
				printf("%d %d\n",m1,i);break;
			}
			m1+=(2*i);f=1;
			for(j=2;j<=sqrt(m1)&&m1>=2;j++)
			{
				if(m1%j==0)
				{
					f=0;break;
				}
			}
			if(f) 
			{
				printf("%d %d\n",m1,i);break;
			}
			m1=m;
		}
	}
	return 0;
} 
