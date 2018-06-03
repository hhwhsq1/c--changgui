#include<stdio.h>
int main()
{
	int n;
	int a,b,s;
	char c;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%x%c%x",&a,&c,&b);
		if(c=='+') s=a+b;
		if(c=='-') s=a-b;
		printf("%o\n",s);
	} 
	return 0; 
}
