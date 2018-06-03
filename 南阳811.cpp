#include<stdio.h>
int main()
{
	int n,a[4000][3],i,j,t;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n/3;i++)
			for(j=0;j<3;j++)
			{
				scanf("%d",&a[i][j]);
			}
		for(i=0;i<n/3;i++)
		{
			if(i%2)
			{
				if(a[i][0]>a[i][1]) {t=a[i][0];a[i][0]=a[i][1];a[i][1]=t;}
				if(a[i][0]>a[i][2]) {t=a[i][0];a[i][0]=a[i][2];a[i][2]=t;}
				if(a[i][1]>a[i][2]) {t=a[i][1];a[i][1]=a[i][2];a[i][2]=t;}
			}
			else
			{
				if(a[i][0]<a[i][1]) {t=a[i][0];a[i][0]=a[i][1];a[i][1]=t;}
				if(a[i][0]<a[i][2]) {t=a[i][0];a[i][0]=a[i][2];a[i][2]=t;}
				if(a[i][1]<a[i][2]) {t=a[i][1];a[i][1]=a[i][2];a[i][2]=t;}
			}
		}
		t=a[0][0];
		for(i=1;i<n/3;i++)
			if(a[i][0]>t) t=a[i][0];
		printf("%d\n",t);
	}
	return 0;
}
