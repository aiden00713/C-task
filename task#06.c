#include <stdio.h>
int main(void)
{
	int year,month,alldays,i,j=0;
	int monthdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};  //月份天數 
	scanf("%d%d",&year,&month);  //輸入年份及月份 
	
	if((year%400==0) || ((year%4==0) && (year%100!=0)))  //閏年判斷 
	{
		monthdays[1]++; //如果是閏年 2月份再多加一天 
		alldays=(((year - 1900)/4)*366 + ((year - 1900) - ((year-1900)/4)) * 365) %7;   
	}
	else
	{
		alldays=(((year - 1900)/4)*366 + ((year - 1900) - ((year-1900)/4)) * 365 +1) %7;
	}
	
	//alldays計算從1900到輸入年份的1 月1 日共有幾天，天數和7取餘數後，多的天數即為當年1 月1 日起始之星期。 
	
	printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
	
	for(i=0;i<month-1;i++)   //加總輸入月份的天數到前一個月 
	{
		alldays+=monthdays[i];
	}
	
	for(i=0;i<alldays%7;i++)  //印出日期前面的空白 
	{
		printf("\t");
		j++; 
	}
	
	for(i=1;i<=monthdays[month-1];i++)  //印出月曆 
	{
		if(j==7)  //超過7時換行 
		{
			printf("\n");
			j=0;
		}
		printf("%2d\t",i);   
		j++;
	}
	
	return 0;
}
