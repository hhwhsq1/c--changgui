#include<stdio.h>
int main()
{
	int n,y,s;
	char x;
	scanf("%d",&n);
	while(n--)
	{
		getchar();
		scanf("%c%d",&x,&y);
		s=y;
		if(x>='A'&&x<='Z') s+=1-'A'+x;
		if(x>='a'&&x<='z') s-=1-'a'+x;
		printf("%d\n",s);
	}
	return 0;
}
