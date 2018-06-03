#include<stdio.h>
int main()
{
	int n,m,t1,t2,t;
	scanf("%d",&n);
	while(n--)
	{
		t1=1,t2=1;
		scanf("%d",&m);
		if(m==1||m==2) {printf("1\n");continue;
		}
		m-=2;
		while(m--)
		{
			t=t1+t2;t1=t2;t2=t;
		}
		printf("%d\n",t);
	}
}
