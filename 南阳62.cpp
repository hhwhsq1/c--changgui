#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		char ch[100],ku[100],t2;
		int c,k,i,j,f,kuu[100]={0},t1;
		k=0;
		c=strlen(gets(ch));
		for(i=0;i<c;i++)
		{
			f=1;
			for(j=0;j<k;j++)
			{
				if(ku[j]==ch[i])
				{
					f=0;kuu[j]++;
				}
			}
			if(f)
			{
				ku[k]=ch[i];kuu[k++]++;
			}
		}
		for(i=0;i<k-1;i++)
			for(j=i+1;j<k;j++)
			{
				if(kuu[i]<kuu[j])
				{
					t1=kuu[i];kuu[i]=kuu[j];kuu[j]=t1;
					t2=ku[i]; ku[i] =ku[j] ;ku[j] =t2;
				}
			}
		t1=kuu[0]-kuu[k-1];
		f=1;
		for(i=2;i<=sqrt(t1);i++)
		{
			if(t1%i==0)
			{
				f=0;break;
			}
		}
		if(f&&t1!=0&&t1!=1) printf("Lucky Word\n%d\n",t1);
		else  printf("No Answer\n0\n");
	}
	return 0;
} 
