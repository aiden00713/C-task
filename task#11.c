#include <stdio.h>
int guess(int m[4],int g[4],int n);
int judge(int m[4],int g[4]);
int main(void)
{
	int m[4],g[4],n=0,i,j;
	srand(time(NULL)); // �]�w�üƺؤl�A����@���Y�i
	for(i=0;i<4;i++)
	{
		m[i]=rand()%10;  //�}�C��J�ü� 
		for(j=0;j<i;j++)
		{
			if(m[i]==m[j])  //���p�Ʀr�w�Q�ιL
			{
				m[i]=rand()%10;  //���s���Ͷü� 
			}
		} 
		//printf("=%d\n",m[i]);
	} 

	printf("Ready! Go:");
	while(1)
	{
		scanf("%d",&n);
		if(guess(m,g,n)!=0)
		{
			if(judge(m,g)==1)
			{
				break;
			}
		}
	}
	printf("MAGIC=");
	for(i=0;i<4;i++)
	{
		printf("%d",m[i]);
	} 
	return 0;
}

int guess(int m[4],int g[4],int n)  //���a�Ʀr���� 
{
	int i=4;
	while(n>0)
	{
		g[--i]=n%10;
		n/=10; 
	} 
	
	if(g[0]==g[1] && g[1]==g[2] && g[2]==g[3] && g[0]==g[3]) //���]��J���@�� 
	{
		printf("Incorrect input, try again!\n");
		return 0;
	}
}

int judge(int m[4],int g[4])  //�P�_�XA�XB 
{
	int i,j,a=0,b=0;
	for(i=0;i<4;i++)
	{
		if(m[i]==g[i])  //��m�M�Ʀr���� 
		{
			a++;
		}
		else
		{
			for(j=0;j<4;j++)
			{
				if(m[i]==g[j])  //��m���@�˦��Ʀr�� 
				{
					b++;
				}
			}
		}
	}
	
	if(a==4)
	{
		printf("=%dA%dB\n",a,b);
		return 1;
	}
	else
	{
		printf("=%dA%dB\n",a,b);
		return 0;
	}
}
