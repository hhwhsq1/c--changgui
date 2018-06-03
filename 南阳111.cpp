#include<stdio.h>
int main()
{
	int a1,b1,a2,b2,a,b,f,x,i;
	char pp;
	while(scanf("%d/%d%c%d/%d",&a1,&b1,&pp,&a2,&b2)!=EOF)
	{
		f=0;
		if(pp=='+') 
		{
			b=b1*b2;a=a1*b2+a2*b1;
			if(a<0) f=!f,a*=-1;
		}
		if(pp=='-')
		{
			b=b1*b2;a=a1*b2-a2*b1;
			if(a<0) f=!f,a*=-1;
		}
		if(a>b) x=b;
		else    x=a;
		for(i=x;i>1;i--)
		{
			if(a%i==0&&b%i==0)
			{
				a/=i;b/=i;i++;
			}
		}
		if(a==0) 
		{
			printf("0\n");continue;
		}
		if(f) printf("-");
		if(b==1) printf("%d\n",a);
		if(b!=1) printf("%d/%d\n",a,b);
	}
	return 0;
}
