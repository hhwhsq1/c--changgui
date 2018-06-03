#include<stdio.h>
int main()
{
	int n,a,b,i,sum;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		scanf("%d%d",&a,&b);
		sum=a;
		while(a>=b)
		{
			i=a%b;
			a=a/b;
			sum+=a;
		}
		if(a==b-1) sum++;
		printf("%d\n",sum);
	}
	return 0;
}
