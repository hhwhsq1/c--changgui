#include<stdio.h>
int main()
{
	int n,x,y,f,i,j;
	scanf("%d",&n);
	while(n--)
	{
		int ch1[7];
		scanf("%d %d",&x,&y);
		for(i=x;i<=y;i++)
		{
			f=1;
			ch1[0]=i/100000;
			ch1[1]=i/10000%10;
			ch1[2]=i/1000%10;
			ch1[3]=i/100%10;
			ch1[4]=i/10%10;
			ch1[5]=i%10;
			for(j=0;j<6;j++)
			{
				if(ch1[j]>6) {
					f=0;break;
				}
				if(i<5&&((ch1[j]-ch1[j+1]>4)||(ch1[j+1]-ch1[j]>4))) {
					f=0;break;
				}
				if(i<4&&ch1[j+2]==ch1[j+1]&&ch1[j+1]==ch1[j]){
					f=0;break;
				}
			}
			if(f) printf("%d%d%d%d%d%d\n",ch1[0],ch1[1],ch1[2],ch1[3],ch1[4],ch1[5]);
		}
	}
	return 0;
}
