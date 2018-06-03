#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,c,bb;
	char ch[40],b[40],p[40];
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		bb=0;
		c=strlen(gets(ch));
		for(i=c-1;i>=0;i--)
			if(ch[i]>='a'&&ch[i]<='z') b[bb++]=ch[i];
		for(i=0;i<bb;i++)
			printf("%c",b[i]); 
		printf("\n");
	}
	return 0;
}
