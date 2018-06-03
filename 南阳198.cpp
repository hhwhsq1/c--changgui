#include<stdio.h>
#include<string.h>
int main()
{
	int n,c,i;
	char ch[12]={'\0'},b[12]={'\0'},bb,q[12]={'\0'};
	scanf("%d",&n);getchar();
	while(n--)
	{
		bb=0;
		c=strlen(gets(ch));
		for(i=c-1;i>=0;i--)
		{
			if(ch[i]=='0'||ch[i]=='1') b[bb++]='O';
			if(ch[i]=='2'||ch[i]=='3') b[bb++]='T';
			if(ch[i]=='4'||ch[i]=='5') b[bb++]='F';
			if(ch[i]=='6'||ch[i]=='7') b[bb++]='S';
			if(ch[i]=='8') b[bb++]='E';
			if(ch[i]=='9') b[bb++]='N';
		}
		for(i=0;i<c;i++)
			printf("%c",b[i]);
		printf("\n");
	}
	return 0;
}
