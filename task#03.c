#include <stdio.h>
int main(void)
{
	char a,b;
	int i=0,j=0,n1,n2,end,end1;
	int d,e;
	int x[40];
	int y[40];
	
	scanf("%c%c",&a,&b);
	
	if(a>='0' && a<='9')
	{
		n1=a-'0';
	}
	else if(a>='A' && a<='F')
	{
		n1=a-'A'+10;
	}

	if(b>='0' && b<='9')
	{
		n2=b-'0';
	}
	else if(b>='A' && b<='F')
	{
		n2=b-'A'+10;
	}
	
//	printf("%04d%04d",n1,n2);  //TEST
	d=n1;
	e=n2;
	for(;d>0;)
	{
		x[i++]=d%2;
		d/=2;
	}
	x[i]=0;
	end=i;
	
	for(;e>0;)
	{
		y[j++]=e%2;
		e/=2;
	}
	y[j]=0;
	end1=j;
	
//	printf("x[0]=%d\n",x[0]);
//	printf("x[1]=%d\n",x[1]);
//	printf("x[2]=%d\n",x[2]);
//	printf("x[3]=%d\n",x[3]);
	
	if(n1==0)
	{
		printf("0000");
	}
	else
	{
		for(i=end-1;i>=0;i--)
		{
			printf("%d",x[i]);
		}
	}
	
	if(n2==0)
	{
		printf("0000");
	}
	else
	{
		for(j=end1-1;j>=0;j--)
		{
			printf("%d",y[j]);
		}
	}
	return 0;
}
