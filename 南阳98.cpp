#include<stdio.h>
int main()
{
	int n,c;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&c);
		if(c>=90&&c<=100) printf("A\n");
		if(c>=80&&c<90) printf("B\n");
		if(c>=70&&c<80) printf("C\n");
		if(c>=60&&c<70) printf("D\n");
		if(c>=0&&c<60) printf("E\n");
	}
	return 0;
} 
