#include<stdio.h>
int main()
{
	int n,m,i,s;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		s=0;
		for(i=1;i*i<m;i++)
		{
			if((m-i)%(i+1)==0) s++;
		}
		printf("%d\n",s);
	}
	return 0;
}
