#include<stdio.h>
int main()
{
	int a,b,r[110]={0},m=0,i,s[999]={0},f;
	while(scanf("%d%d",&a,&b)&&(a||b))
	{
		r[a]+=b;f=1;
		for(i=0;i<m;i++)
		{
			if(s[i]==a) f=0;
		}
		if(f) s[m++]=a;
	}
	for(i=0;i<m;i++)
		printf("%d %d\n",s[i],r[s[i]]);
	return 0;
}
