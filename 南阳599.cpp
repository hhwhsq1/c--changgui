#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		if(m>=0&&m<=10) printf("1\n");
		else            printf("%d\n",1+((m-6)/5));
	}
	return 0;
}
