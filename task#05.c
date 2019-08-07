#include <stdio.h>
int main(void)
{
	int a,b,i,j=0,k=0,l=0;
	int sum;
	scanf("%d%d",&a,&b);
	
	if(a<b)
	{
		for(i=a;i<=b;i++)  //½d³ò 
		{
			for(j=2;j<=i;j++)  //§PÂ_½è¼Æ 
			{
				if(i%j==0)
				{
					k++;
				}
			
				if(i==j &&  k==1)
				{
					l++;
				}
			}
			k=0;
		}
	}
	else
	{
		for(i=b;i<=a;i++)  //½d³ò 
		{
			for(j=2;j<=i;j++)  //§PÂ_½è¼Æ 
			{
				if(i%j==0)
				{
					k++;
				}
			
				if(i==j &&  k==1)
				{
					l++;
				}
			}
			k=0;
		}
	}
	printf("%d",l);
	return 0;
 } 
