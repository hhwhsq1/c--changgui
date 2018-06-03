#include<stdio.h>
int main()
{
	int n,a[100],i,l,m,w;
	while(1)
	{
		scanf("%d",&n);
		if(!n) break;
		for(i=0;i<n;i++)
		{
			scanf("%d",&l);
			a[i]=l;
		}	
		m=a[0];w=0;
		for(i=1;i<n;i++)
		{
			if(a[i]<m)
			{
				m=a[i];w=i;
			}
		}
		l=a[w];a[w]=a[0];a[0]=l;
		for(i=0;i<n;i++)
			printf("%d ",a[i]);
		printf("\n");
	}
	return 0; 
}
