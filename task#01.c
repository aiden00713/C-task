#include <stdio.h>
int main(void)
{
	char a,b,c,d,e;
	scanf("%c%c%c%c",&a,&b,&c,&d);
	int n,n1,n2,n3,n4;
	n=a-'0';
	n1=b-'0';
	n2=c-'0';
	n3=d-'0';
	n4=n*8+n1*4+n2*2+n3;
	printf("%d",n4);
	return 0;
}
