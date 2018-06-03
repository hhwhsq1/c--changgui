#include<stdio.h>
int main() 
{
	int n,m,i,j,shu[110],ku[110],k,f,t;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		k=0;
		for(i=0;i<m;i++)
			scanf("%d",&shu[i]);
		for(i=0;i<m;i++)
		{
			f=1;
			for(j=0;j<k;j++)
			{
				if(shu[i]==ku[j]) f=0;
			}
			if(f) ku[k++]=shu[i];
		}
		for(i=0;i<k-1;i++)
			for(j=i+1;j<k;j++)
			{
				if(ku[i]>ku[j])
				{
					t=ku[i];ku[i]=ku[j];ku[j]=t;
				}
			}
		printf("%d\n",k);
		for(i=0;i<k;i++)
			printf("%d ",ku[i]);
		printf("\n");
	}
	return 0;
}
