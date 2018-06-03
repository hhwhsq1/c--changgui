#include<stdio.h>
#include<string.h>
int main()
{
	int n,i;
	long int m;
	char s[10],b[10]={'0'};
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		m=0;
		gets(s);
		for(i=1;i<strlen(s);i++)
			m=m*10+s[i]-48;
		strcpy(b,s);
		printf("%ld\n",m);
	}
	return 0;
}
