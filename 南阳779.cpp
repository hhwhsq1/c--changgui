#include<stdio.h>
int main()
{
	int a,b,t;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		t=2*a/b;
		if((2*a)%b) t++;
		if(t==1)    t++;
		printf("%d\n",t);
	}
	return 0;
}
