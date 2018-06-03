#include<stdio.h>
int main()
{
	int n,m,i,ii,ww,f1,f2,f3,c=0;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		int w[10],ww,t=0,f=0,s;
		for(i=n;i<=m;i++)
		{
			ii=i;ww=0;
			f1=0;f2=0;f3=0;s=1;
			for(;;)
			{
				w[ww]=ii%10;ii/=10;
				if(w[ww]==1) f1=1;
				if(w[ww]==2) f2=1;
				if(w[ww]==5) f3=1;
				if(w[ww]==5&&w[ww-1]==2&&w[ww-2]==1) t++;
				if(s&&f1&&f2&&f3)
				{
					f++;s=0;
				}
				ww++;
				if(!ii) break;
			}
		}
		printf("Case %d:%d %d\n",++c,f,t);
	}
	return 0;
}
