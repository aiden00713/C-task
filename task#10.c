#include <stdio.h>
void printfunc(char a[3][3]);
void computer(char a[3][3]);
void computer2(char a[3][3]);
int mainfunc(char a[3][3]);

int main(void)
{
	int n,m,i=0;
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
				return 0;
			}
			else if(mainfunc(a)==2)
			{
				break;
			}
		}
	
		{
			printf("Computer to put X:");
			if(i==0)
			{
				computer(a);
				i++;
			}
			else
			{
				computer2(a);
			}
			
			printf("\n");
			printfunc(a);
			if(mainfunc(a)==1)
			{
				printf("Player X win!");
				return 0;
			}
			else if(mainfunc(a)==2)
			{
				break;
			}
		}
	}
	printf("It's a tie.");
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
		if(a[i][0]!=' ' && a[i][0]==a[i][1] && a[i][1]==a[i][2])   //�C�P�_ 
		{
			return 1;
		}
		if(a[0][i]!=' ' && a[0][i]==a[1][i] && a[1][i]==a[2][i])   //��P�_ 
		{
			return 1;
		}
		if(a[0][0]!=' ' && a[0][0]==a[1][1] && a[1][1]==a[2][2])   //���W�k�U�קP�_
		{
			return 1;
		}
    	if(a[0][2]!=' ' && a[0][2]==a[1][1] && a[1][1]==a[2][0])   //�k�W���U�קP�_
		{
			return 1;
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(a[i][j]!=' ')
			{
				k++;
			}
		}
	}
	
	if(k==9)
	{
		return 2;
	}
	return 0;
}

void computer(char a[3][3]) //�Ĥ@��P�_ 
{
	if(a[1][1]=='O')  //���a�Ĥ@��]�b�����A�q���]���U 
	{
		printf("2 0");
		a[2][0]='X';
	}
	else  //���a�Ĥ@��]�b�D�����A�q���]���� 
	{
		printf("1 1");
		a[1][1]='X';
	}
}

void computer2(char a[3][3]) //�Ĥ@��᪺�P�_
{
	int i,j=0;
	
	if(a[1][1]==a[0][2] && a[2][0]==' ')  //�k�W���U�ר��u�P�_
	{
		printf("2 0");
		a[2][0]='X';
		return;
	}
	else if(a[1][1]==a[2][0] && a[0][2]==' ')
	{
		printf("0 2");
		a[0][2]='X';
		return;
	}
	
	if(a[1][1]==a[0][0] && a[2][2]==' ')  //���W�k�U�ר��u�P�_
	{
		printf("2 2");
		a[2][2]='X';
		return;
	}
	else if(a[1][1]==a[2][2] && a[0][0]==' ')
	{
		printf("0 0");
		a[0][0]='X';
		return;
	}
	
	
	for(i=0;i<=2;i++)  //�C���u�P�__�P�_�O�_���ֳs���@�u��
	{
		if(a[i][0]==' ' && a[i][1]==a[i][2] && a[i][1]=='O')
		{
			printf("%d 0",i);
			a[i][0]='X';
			return;
		}
		else if(a[i][1]==' ' && a[i][0]==a[i][2] && a[i][0]=='O')
		{
			printf("%d 1",i);
			a[i][1]='X';
			return;
		}
		else if(a[i][2]==' ' && a[i][0]==a[i][1] && a[i][1]=='O')   
		{
			printf("%d 2",i);
			a[i][2]='X';
			return;
		}
	}
		
	for(i=0;i<=2;i++)  //�樾�u�P�__�P�_�O�_���ֳs���@�u��
	{
		if(a[0][i]==' ' && a[1][i]==a[2][i] && a[1][i]=='O')
		{
			printf("0 %d",i);
			a[0][i]='X';
			return;
		}
		else if(a[1][i]==' ' && a[0][i]==a[2][i] && a[0][i]=='O')
		{
			printf("1 %d",i);
			a[1][i]='X';
			return;
		}
		else if(a[2][i]==' ' && a[0][i]==a[1][i] && a[1][i]=='O')    
		{
			printf("2 %d",i);
			a[2][i]='X';
			return;
		}
	}
	
	for(i=0;i<=2;i++)   //���]�S�o���u ��ť��H�K��J 
	{
		for(j=0;j<=2;j++)
		{
			if(a[i][j]==' ')
			{
				a[i][j]='X';
				return;
			}
		}
	}
}
