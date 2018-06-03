#include<stdio.h>
#include<math.h>
int main()
{
	long int c,n,z,y,i,jz,jy,f,c1,j;
	scanf("%ld",&n);
	while(n--)
	{
		f=1;
		scanf("%ld",&c);
		c1=sqrt(c);
		if(c==0||c==1)
		{
			printf("%ld 2\n",2-c);continue;
		}
		if(c==4)
		{
			printf("1 5\n");continue;
		}
		for(i=2;i<=c1;i++)
		{
			if(c%i==0) 
			{
				f=0;break;
			}
		}
		if(f) printf("0 %ld\n",c);
		if(!f)
		{
			jy=0;jz=0;
			for(i=c;;i--)
			{
				c1=sqrt(i);
				for(j=2;j<=c1;j++)
				{
					f=1;
					if(i%j==0)
					{
						f=0;break;
					}
				}
				jz++;
				if(f) 
				{
					z=i;break;
				}
			}
			for(i=c;;i++)
			{
				c1=sqrt(i);
				for(j=2;j<=c1;j++)
				{
				f=1;
				if(i%j==0) 
				{
					f=0;break;
				}
				}
				jy++;
				if(f) 
				{
					y=i;break;
				}
			}
			if(jz<=jy) 
			{
				printf("%ld %ld\n",--jz,z);
			}
			else
			{
				printf("%ld %ld\n",--jy,y);
			}
		}
	}
}
