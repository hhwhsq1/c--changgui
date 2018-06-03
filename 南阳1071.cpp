#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	while(scanf("%d%d",&x,&y)!=EOF)
	{
		if(!x||!y) 
		{
			printf("Signs can't be sure\n");
			continue;
		}
		if(fabs(x*y)+x*y) 
		{
			printf("Signs are not opposot\n");
			continue;
		}
		printf("Signs are opposite\n");
	}
	return 0;
}
