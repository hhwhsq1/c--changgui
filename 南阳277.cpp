#include<stdio.h>
#include<string.h>
int main()
{
	int n,m,k,i,j;
	char ku[1000][6],t[6];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		k=0;
		getchar();
		for(i=0;i<m;i++)
			gets(ku[k++]);
		for(i=0;i<m-1;i++)
			for(j=i+1;j<m;j++)
				if(strcmp(ku[i],ku[j])>0)
				{
					strcpy(t,ku[i]);strcpy(ku[i],ku[j]);strcpy(ku[j],t);
				}
		puts(ku[0]);
	}//杀鸡用了牛刀，本来，n可以的，懒得改了.. 
	return 0;
}
