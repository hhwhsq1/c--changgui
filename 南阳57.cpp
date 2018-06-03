#include<stdio.h>
int main()
{
	int n,m,a[4],t,l=0,i,j,c;
	scanf("%d",&n);
	while(n--)
	{
		c=0;
		scanf("%d",&m);l=m;
		a[0]=m/1000;a[1]=m/100%10;a[2]=m/10%10;a[3]=m%10;
		while(l!=m||!c)
		{
			m=l;
			for(i=0;i<3;i++)
			{
				for(j=i+1;j<4;j++)
				{
					if(a[i]<a[j]) 
					{
						t=a[i];a[i]=a[j];a[j]=t;
					}
				}
			}
			l=a[0]*999+a[1]*90-a[2]*90-a[3]*999;c++;
			a[0]=l/1000;a[1]=l/100%10;a[2]=l/10%10;a[3]=l%10;
		}
		printf("%d\n",c);
	}
	return 0;
}
