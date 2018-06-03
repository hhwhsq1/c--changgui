#include<stdio.h>
int main()
{
	int n;
	long long int a;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%lld",&a);
		if(!(a-1))printf("471\n");
		else printf("%lld471\n",a-1);
	}
	return 0;
}
