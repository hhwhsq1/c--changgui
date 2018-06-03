#include<stdio.h>
#include<string.h>
int main()
{
	char ch[1000],h[1000]={'\0'},t;
	while(gets(ch))
	{
		int c=0,i,j;
		c=strlen(ch);
		for(i=0;i<c;i++)
		{
			if(ch[i]=='y'&&ch[i+1]=='o'&&ch[i+2]=='u')
			{
				ch[i]='w';ch[i+1]='e';
				for(j=i+2;j<c-1;j++)
				{
					ch[j]=ch[j+1];
				}
				c--;
			}
		}
		for(i=0;i<c;i++)
			printf("%c",ch[i]);
		printf("\n");
		strcpy(h,ch);
	}
}
