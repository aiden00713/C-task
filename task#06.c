#include <stdio.h>
int main(void)
{
	int year,month,alldays,i,j=0;
	int monthdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};  //����Ѽ� 
	scanf("%d%d",&year,&month);  //��J�~���Τ�� 
	
	if((year%400==0) || ((year%4==0) && (year%100!=0)))  //�|�~�P�_ 
	{
		monthdays[1]++; //�p�G�O�|�~ 2����A�h�[�@�� 
		alldays=(((year - 1900)/4)*366 + ((year - 1900) - ((year-1900)/4)) * 365) %7;   
	}
	else
	{
		alldays=(((year - 1900)/4)*366 + ((year - 1900) - ((year-1900)/4)) * 365 +1) %7;
	}
	
	//alldays�p��q1900���J�~����1 ��1 ��@���X�ѡA�ѼƩM7���l�ƫ�A�h���ѼƧY����~1 ��1 ��_�l���P���C 
	
	printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
	
	for(i=0;i<month-1;i++)   //�[�`��J������Ѽƨ�e�@�Ӥ� 
	{
		alldays+=monthdays[i];
	}
	
	for(i=0;i<alldays%7;i++)  //�L�X����e�����ť� 
	{
		printf("\t");
		j++; 
	}
	
	for(i=1;i<=monthdays[month-1];i++)  //�L�X��� 
	{
		if(j==7)  //�W�L7�ɴ��� 
		{
			printf("\n");
			j=0;
		}
		printf("%2d\t",i);   
		j++;
	}
	
	return 0;
}
