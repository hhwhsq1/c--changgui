#include<stdio.h>
#include<string.h>
int main()
{
	int n,c,i;
	scanf("%d",&n);
	char ch[110];
	getchar();
	while(n--)
	{
		c=strlen(gets(ch));
		for(i=0;i<c;i++)
		{
			if(ch[i]>='A'&&ch[i]<='Z') ch[i]+=32;
			else ch[i]-=32;
		}
		puts(ch);
	}
	return 0;
}
