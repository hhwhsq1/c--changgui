#include<stdio.h>
#include<string.h>
int main()
{
	int i,C=0;
	char a[12][5]={"I","II","III","IV","V","VI","VII","VIII","IX","X","XI","XII"},ch[5];
	while(gets(ch))
	{
		for(i=0;i<12;i++)
		{
			if(!strcmp(a[i],ch)) break;
		}
		printf("Case %d: %d\n",++C,++i);
	}
	return 0;
}
