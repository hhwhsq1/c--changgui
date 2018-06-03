#include<stdio.h>
#include<string.h>
int main()
{
	int n,c,i,t;
	char ch[220];
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		c=strlen(gets(ch));
		t=0;
		for(i=0;i<c;i++)
			if(ch[i]>='a'&&ch[i]<='z') t++;
		t%=26;
		if(!t) printf("z\n");
		else   printf("%c\n",t+96);
	}
}
