#include <stdio.h>
int main(void)
{
	char a,b;
	int i=0,n1,n2;
	
	scanf("%c%c",&a,&b);
	
	if(a>='0' && a<='9')
	{
		n1=(a-'0')*16;
	}
	else if(a>='A' && a<='F')
	{
		n1=(a-'A'+10)*16;
	}
	else 
	{
		i++;
	}
	
	if(b>='0' && b<='9')
	{
		n2=(b-'0');
	}
	else if(b>='A' && b<='F')
	{
		n2=(b-'A'+10);
	}
	else 
	{
		i++;
	}
	
	if(i>=1)
	{
		printf("%c%c=NO",a,b);
	}
	else
	{
		printf("%c%c=%d",a,b,n1+n2);
	}
	return 0;
}
