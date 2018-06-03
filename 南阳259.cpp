#include<stdio.h>
int main()
{
	int n;
	char ch[22];
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		gets(ch);
		puts(ch);
	}
	return 0;
}
