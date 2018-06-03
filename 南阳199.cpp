#include<stdio.h>
#include<math.h>
int main()
{
	int n,l,d,r,sum;
	float lj;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d%d",&l,&d,&r);
		if(0.25*(1+d*d)>r*r)
		{
			printf("impossible\n");
			continue;
		}
		lj=sqrt(4*r*r-d*d);
		sum=l/lj;
		if(lj*sum<l)
		{
			if(l-lj*sum+0.5*lj<1)
			{
				printf("impossible\n"); 
				continue;
			}
			else sum++;
		}
		printf("%d\n",sum);
	}
	return 0;
}
