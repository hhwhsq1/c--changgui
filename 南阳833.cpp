#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n<3) printf("Hrdv\n");
		else    printf("Yougth\n");
	}
	return 0;
}
