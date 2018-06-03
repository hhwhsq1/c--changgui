#include<stdio.h>
#include<string.h>
int main()
{
	int n,c,i,r,w,b;
	char ch[1010];
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		r=0;w=0;b=0; 
		c=strlen(gets(ch));
		for(i=0;i<c;i++)
		{
			if(ch[i]=='R') r++;
			if(ch[i]=='W') w++;
			if(ch[i]=='B') b++;
		}
		while(r--) printf("R");
		while(w--) printf("W");
		while(b--) printf("B");
		printf("\n");
	}
}
