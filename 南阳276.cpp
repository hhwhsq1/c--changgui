#include<stdio.h>
int main()
{
	int n;
	char a,b;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		scanf("%c %c",&a,&b);
		getchar();
		if(a<b) printf("%c>%c\n",a,b);
		if(a==b) printf("%c=%c\n",a,b);
		if(a>b) printf("%c<%c\n",a,b);
	}
	return 0;
}
