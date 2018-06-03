#include<stdio.h>
#include<string.h>
int main()
{
	int n,m,ai,a,bi,b,i,f;
	scanf("%d",&n);
	while(n--)
	{
		char ch1[10],mm[10];
		scanf("%d",&m);
		a=0;
		for(i=0;i<m;i++)
		{
			f=1;
			scanf("%d %d %s",&ai,&bi,ch1);
			if((ai>a&&f)||(ai==a&&f&&bi<b)||(ai==a&&f&&bi==b&&strcmp(ch1,mm)>0))
			{
				a=ai;b=bi;strcpy(mm,ch1);f=0;
			}
		}
		printf("%s\n",mm);
	}
	return 0;
}
