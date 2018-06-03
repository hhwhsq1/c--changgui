#include<stdio.h>
#include<string.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	while(n--)
	{
		char ch[10300]={'\0'},z;
		int s[26]={0},l,zz=0;
		scanf("%s",ch);
		l=strlen(ch);
		for(i=0;i<l;i++)
			s[ch[i]-97]++;
		for(i=0;i<l;i++)
		{
			if(s[i]>zz) z=i+97,zz=s[i];
		}
		printf("%c\n",z);
	}
	return 0;
}
