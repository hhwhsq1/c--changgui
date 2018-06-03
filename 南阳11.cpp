#include<stdio.h>
int main()
{
	int n,i,t,k;
	scanf("%d",&n);
	while(n--)
	{
		k=0;
		scanf("%d",&t);
		for(i=1;i<t;i+=2)
		{
			if(k) printf(" ");
			printf("%d",i);
			k=1;
		}
		k=0; 
		printf("\n");
		for(i=2;i<=t;i+=2)
		{
			if(k) printf(" ");
			printf("%d",i);
			k=1;
		}
		printf("\n");
	}
}
