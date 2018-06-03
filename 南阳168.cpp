#include<stdio.h>
int main()
{
	int n,a,b,c,i,m;
	scanf("%d",&n); 
	while(n--)
	{
		scanf("%d",&m);
		int rr[366]={0},rm=0;
		while(m--)
		{
			scanf("%d %d %d",&a,&b,&c);
			for(i=b;i<b+c;i++)
			{
				rr[i]+=a;
				if(rr[i]>rm) rm=rr[i];
			}
		}
		printf("%d\n",rm);
	}
	return 0;
}
