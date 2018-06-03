#include<stdio.h>
int main()
{
	int i,n,y,m,d,r,p[12]={31,28,31,30,31,30,31,31,30,31,30,31},sum;
	scanf("%d",&n);
	while(n--)
	{
		r=0;sum=0;
		scanf("%d%d%d",&y,&m,&d);
		if((y%4==0&&y%100!=0)||(y%400==0)) r=1;
		for(i=0;i<m-1;i++)
			sum+=p[i];
		sum+=d;
		if(r&&(m>2)) sum++;
		printf("%d\n",sum);
	}
	return 0;
}
