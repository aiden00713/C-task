#include <stdio.h>
int main(void)
{
	int n,i=0,j,end,a[7];
	int sum1=0,sum2=0,c,d,need;
	scanf("%d",&n);
	need=n;

	while(n>0)
	{
		a[i++]=n%10;
		n/=10;
	}
	end=i;
	c=8;
	for(i=end-1;i>3;i--)
	{
		sum1+=a[i]*c;
		c/=2;
	}
	d=8;
	for(i=3;i>=0;i--)
	{
		sum2+=a[i]*d;
		d/=2;
	}
	
	if(sum1>15 || sum2>15)
	{
		
		printf("=NO");
	}
	else
	{
		printf("%d=%X%X",need,sum1,sum2);
	}
	
	return 0;
}
	
	

	
	
	
