#include<stdio.h>
int main()
{
	int n,a,b,c;
	while(scanf("%d",&n)&&n)
	{
		a=n/100;b=n/10%10;c=n%10;
		if(a*a*a+b*b*b+c*c*c==n) printf("Yes\n");
		if(a*a*a+b*b*b+c*c*c!=n) printf("No\n");
	}
	return 0;
} 
