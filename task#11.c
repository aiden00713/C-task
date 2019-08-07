#include <stdio.h>
int guess(int m[4],int g[4],int n);
int judge(int m[4],int g[4]);
int main(void)
{
	int m[4],g[4],n=0,i,j;
	srand(time(NULL)); // 砞﹚睹计贺磅︽Ω
	for(i=0;i<4;i++)
	{
		m[i]=rand()%10;  //皚睹计 
		for(j=0;j<i;j++)
		{
			if(m[i]==m[j])  //安计砆ノ筁
			{
				m[i]=rand()%10;  //穝玻ネ睹计 
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

int guess(int m[4],int g[4],int n)  //產计だ秆 
{
	int i=4;
	while(n>0)
	{
		g[--i]=n%10;
		n/=10; 
	} 
	
	if(g[0]==g[1] && g[1]==g[2] && g[2]==g[3] && g[0]==g[3]) //安砞块常妓 
	{
		printf("Incorrect input, try again!\n");
		return 0;
	}
}

int judge(int m[4],int g[4])  //耞碭A碭B 
{
	int i,j,a=0,b=0;
	for(i=0;i<4;i++)
	{
		if(m[i]==g[i])  //竚㎝计常癸 
		{
			a++;
		}
		else
		{
			for(j=0;j<4;j++)
			{
				if(m[i]==g[j])  //竚ぃ妓计癸 
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
