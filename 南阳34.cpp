#include<stdio.h>
int main()
{
	int a,b,c,i,f=0;
	scanf("%d%d%d",&a,&b,&c);
	for(i=10;i<=100;i++)
	{
		if(i%3==a&&i%5==b&&i%7==c) f=1;
		if(f) break;
	}
	if(f) printf("%d\n",i);
	if(!f) printf("No answer\n");
} 
