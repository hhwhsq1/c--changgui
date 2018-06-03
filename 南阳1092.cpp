#include<stdio.h>
#include<string.h>
int main()
{
	char ch[300];
	int l,i,d,w,f;
	while(l=strlen(gets(ch)))
	{
		i=0;d=0;w=0;f=1;
		if(ch[0]=='(') printf("-"),i++;
		for(i;i<l;i++)
		{
			if(f&&ch[i]=='0') continue;
			f=1;
			if(ch[i]!=')') printf("%c",ch[i]);
			if(d) break;
			if(ch[i]=='.') d=1,printf(".");
		}
		if(!d) 
		{
			printf(".00\n");
			continue;
		}
		if(!ch[i+1])
		{
			printf("0\n");
			continue;
		}
		if(ch[i+2]>'4') 
		{
			printf("%c\n",++ch[i+1]);
			continue;
		}
		printf("%c\n",ch[i+1]);
	}
}
