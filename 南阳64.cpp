#include<stdio.h>
int main()
{
	int n,a,b,j,t;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		if(((b-a*2)/2>=0)&&!((b-a*2)%2))
		{
			t=(b-a*2)/2;j=a-t;
			printf("%d %d\n",j,t);
		}
		else
			printf("No answer\n");
	}
}
