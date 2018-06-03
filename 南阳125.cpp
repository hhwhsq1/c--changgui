#include<stdio.h>
int main()
{
	int n,m,i,b,s;
	long int l;
	char chl[6];
	scanf("%d",&n);
	while(n--)
	{
		b=1;s=0;
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			scanf("%s",chl);
			if(chl[0]=='I') b*=20;
			if(chl[0]=='O') b/=20;
			if(chl[0]=='S')
			{
				scanf("%ld",&l);
				s+=l*60/b;
			}
		}
		printf("%d\n",s);
	}
	return 0;
}
