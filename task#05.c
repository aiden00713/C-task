#include <stdio.h>
int main(void)
{
	int a,b,i,j=0,k=0,l=0;
	int sum;
	scanf("%d%d",&a,&b);
	
	if(a<b)
	{
		for(i=a;i<=b;i++)  //�d�� 
		{
			for(j=2;j<=i;j++)  //�P�_��� 
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
		for(i=b;i<=a;i++)  //�d�� 
		{
			for(j=2;j<=i;j++)  //�P�_��� 
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
