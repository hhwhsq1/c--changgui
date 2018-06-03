#include<stdio.h>
int main()
{
	int m,n,a,b,c,sum,t,a1,b1,c1;
	while(scanf("%d%d",&m,&n)&&m&&n)
	{
		sum=m+n;t=0;
		if(m/100>=n/100) a=n/100;
		else a=m/100;
		if(m/10%10>=n/10%10) b=n/10%10;
		else b=m/10%10;
		if(m%10>=n%100) b=n%10;
		else c=m%10;
		a1=sum/100;b1=sum/10%10;c1=sum%10;
		if((a1<=a)&&(m/100+n/100)) t++;
		if((b1<=b)&&(m/10%10+m/10%10)) t++;
		if((c1<=c)&&(m%10+n%10)) t++;
		if(sum>=1000) t++;
		printf("%d\n",t);
	}
	return 0;
}
