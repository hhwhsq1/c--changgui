#include<stdio.h>
int main()
{
	int n,x,m,y,z;
	float s;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d%d%d",&x,&m,&y,&z);
		s=(x*m*z)/(y-x);
		printf("%.2f",s);
	}
	return 0;
} 
