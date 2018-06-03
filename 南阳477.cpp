#include<stdio.h>
int main()
{
	int n;
	float a,b,c;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%f%f%f",&a,&b,&c);
		if((a+b>=c-1e-05)&&(a+b<=c+1e-05)) printf("Yes\n");
		else       						   printf("No\n");
	}
	return 0; 
}
