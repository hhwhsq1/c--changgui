#include<stdio.h>
int main()
{
	int N,M,i,xx1[100],xx2[100],xx3[100],sum,j,z,zz;
	char na[100][21],ch1[100],ch2[100];
	scanf("%d",&N);
	while(N--)
	{
		sum=0;z=0;zz=0;
		scanf("%d",&M);
		for(i=0;i<M;i++)
		{
			j=0;
			scanf("%s %d %d %c %c %d",na[i],&xx1[i],&xx2[i],&ch1[i],&ch2[i],&xx3[i]);
			if(xx1[i]>80&&xx3[i]) j+=8000;
			if(xx1[i]>85&&xx2[i]>80) j+=4000;
			if(xx1[i]>90) j+=2000;
			if(xx1[i]>85&&ch2[i]=='Y') j+=1000;
			if(xx2[i]>80&&ch1[i]=='Y') j+=850;
			if(z<j) {
				z=j;zz=i;
			}
			sum+=j;
		}
		puts(na[zz]);
		printf("%d\n%d\n",z,sum);
	}
	return 0;
}
