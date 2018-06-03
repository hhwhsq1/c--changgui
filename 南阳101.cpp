#include<stdio.h>
#include<math.h> 
int main()
{
	int n;
	float x1,y1,x2,y2,a,b,c;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
		a=x1-x2;
		b=y1-y2;
		c=sqrt(a*a+b*b);
		printf("%.2f\n",c);
	}
	return 0; 
}
