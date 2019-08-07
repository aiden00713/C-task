#include <stdio.h>
void printfunc(char a[3][3]);
int mainfunc(char a[3][3]);
int main(void)
{
	int n,m,i,j;
	char a[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
	printfunc(a);
	while(1)
	{
		{
			printf("Place to put O:");
			scanf("%d%d",&n,&m);
			a[n][m]='O';
			printfunc(a);
			if(mainfunc(a)==1)
			{
				printf("Player O win!");
				break;
			}
		}
	
		{
			printf("Place to put X:");
			scanf("%d%d",&n,&m);
			a[n][m]='X';
			printfunc(a);
			if(mainfunc(a)==1)
			{
				printf("Player X win!");
				break;
			}
		}
	}
	return 0;
}

void printfunc(char a[3][3])
{
	printf("%c|%c|%c\n",a[0][0],a[0][1],a[0][2]);
	printf("-+-+-\n");
	printf("%c|%c|%c\n",a[1][0],a[1][1],a[1][2]);
	printf("-+-+-\n");
	printf("%c|%c|%c\n",a[2][0],a[2][1],a[2][2]);
}

int mainfunc(char a[3][3])
{
	int i,j,k=0;
	for(i=0;i<=2;i++)
	{
		if(a[i][0]!=' ' && a[i][0]==a[i][1] && a[i][1]==a[i][2])   //¦C§PÂ_ 
		{
			return 1;
		}
		if(a[0][i]!=' ' && a[0][i]==a[1][i] && a[1][i]==a[2][i])   //¦æ§PÂ_ 
		{
			return 1;
		}
		if(a[0][0]!=' ' && a[0][0]==a[1][1] && a[1][1]==a[2][2])   //¥ª¤W¥k¤U±×§PÂ_
		{
			return 1;
		}
    	if(a[0][2]!=' ' && a[0][2]==a[1][1] && a[1][1]==a[2][0])   //¥k¤W¥ª¤U±×§PÂ_
		{
			return 1;
		}
		return 0;
	}
}
