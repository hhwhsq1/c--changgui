#include<stdio.h>
#define PI 3.1415926
int main()
{
	float r;
	while(scanf("%f",&r)!=EOF)
		printf("%.0f\n",PI*4/3*r*r*r);
	return 0;
} 
