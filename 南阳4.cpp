#include<stdio.h>
int main()
{
	int n;
	char a,b,c,t;
	scanf("%d",&n);
	while(n--)
	{
		getchar();
		scanf("%c%c%c",&a,&b,&c);
		if(c<b) {
		t=c;c=b;b=t;}
		if(b<a) {
		t=b;b=a;a=t;}
		if(c<b) {
		t=c;c=b;b=t;}
		printf("%c %c %c\n",a,b,c);
	}
} 
