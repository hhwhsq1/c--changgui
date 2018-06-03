#include<stdio.h>
int main()
{
	int dd[1000]={0};
	int n,k,i,j;
	scanf("%d%d",&n,&k);
	for(i=1;i<=k;i++)
		for(j=i;j<=n;j+=i)
		dd[j]=!dd[j];
	for(i=1;i<=n;i++)
		if(dd[i]) printf("%d ",i);
	return 0;
}
