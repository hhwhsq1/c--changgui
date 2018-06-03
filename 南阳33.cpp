#include<stdio.h>
#define M 100
int main()
{
	int n,a[M][M],n1,f=1,s=0,x,z=0,y,i=1,j;
	scanf("%d",&n);
	n1=n;x=n-1;y=n-1;
	while(i<=n*n)
	{
		if(f==1)
		{
			for(j=s;j<=x;j++)
			{
				a[j][y]=i++;
			}
			f++;
		}
		y--;
		if(i>n*n) break;
		if(f==2)
		{
			for(j=y;j>=z;j--)
			{
				a[x][j]=i++;
			}
			f++;
		}
		x--;
		if(i>n*n) break;
		if(f==3)
		{
			for(j=x;j>=s;j--)
			{
				a[j][z]=i++;
			}
			f++;
		}
		z++;
		if(i>n*n) break;
		if(f==4)
		{
			for(j=z;j<=y;j++)
			{
				a[s][j]=i++;
			}
			f=1;
		}
		s++;
		if(i>n*n) break;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}	 
}
