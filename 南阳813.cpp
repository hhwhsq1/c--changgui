#include<stdio.h>
int main()
{
	int a,b,i,f;
	while(scanf("%d%d",&a,&b)&&(a||b))
	{
		f=0;
		for(i=1;i<a;i++)
		{
			if(i*(a-i)==b) f=1;
			if(f) break;
		}
		if(f) printf("YES\n");
		else  printf("NO\n");
	}
	return 0; 
}
