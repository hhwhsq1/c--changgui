#include<stdio.h>
#include<string.h>
int main()
{
	int n,l,f,i;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		char ch[101];
		f=1;
		l=strlen(gets(ch));
		while(!(l%2))
		{
			for(i=0;i<l/2;i++)
			{
				if(ch[l/2+i]!=ch[l/2-i-1]) f=0;
			}
			if(!f) break;
			l/=2;
		}
		printf("%d\n",l);
	}
	return 0;
}
