#include <stdio.h>
int main(void)
{
	int daya,dayb,sumday=0;
	int i,j,k;
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d",&daya,&dayb);
	int daya_y,daya_m,daya_d;
	int dayb_y,dayb_m,dayb_d;
	
	daya_y=daya/10000;        //取日期1的"年" 
	daya_m=(daya%10000)/100;  //取日期1的"月" 
	daya_d=daya%100;          //取日期1的"日" 
	
	dayb_y=dayb/10000;        // 取日期2的"年" 
	dayb_m=(dayb%10000)/100;  // 取日期2的"月" 
	dayb_d=dayb%100;          // 取日期2的"日" 
	
/*	printf("%d %d %d\n",daya_y,daya_m,daya_d);
	printf("%d %d %d",dayb_y,dayb_m,dayb_d);
	測試是否取值成功
*/
	if(daya_y==dayb_y) //假如年份一樣 
	{
		if(daya_m==dayb_m) //假如月份一樣
		{
			sumday=dayb_d-daya_d;
		} 
		else  //月份不一樣 
		{
			for(i=daya_m;i<dayb_m;i++)
			{
				sumday+=month[i];     //月份日期相加 
			}
			sumday=sumday-daya_d+dayb_d;    //總天數減去日期1的日加日期2的日期 
		}
		
		if(daya_m<=2 && dayb_m>2)  //假如月份有碰到2月到3月的區間 
		{
			if(daya_y%4==0 && daya_y%100!=0 || daya_y%400==0)
			{
				sumday++;
			}
		}	
	}
	else if(daya_y>dayb_y)  //假設日期1的年份比較大 
	{
		for(i=dayb_m;i<=12;i++)  //日期2的天數 
		{
			sumday+=month[i];     //月份日期相加 
			//printf("日期2月份%d天數相加%d\n",i,sumday);
		}
		for(i=0;i<daya_m;i++)  //日期1的天數 
		{
			sumday+=month[i];     //月份日期相加 
		}
		sumday=sumday-dayb_d+daya_d;
		
		if(daya_m>2)  //假如日期1的月份有碰到2月到3月的區間 
		{
			if(daya_y%4==0 && daya_y%100!=0 || daya_y%400==0)
			{
				sumday++;
			}
		}
		if(dayb_m<3)  //假如日期2的月份有碰到2月到3月的區間 
		{
			if(dayb_y%4==0 && dayb_y%100!=0 || dayb_y%400==0)
			{
				sumday++;
			}
		}

		for(j=dayb_y+1;j<daya_y;j++)  //計算年距有閏年 
		{
			sumday+=365;
			if(j%4==0 && j%100!=0 || j%400 ==0)
			{
				sumday+=1;
			}
		}
	}
	
	else   //假設日期2的年份比較大
	{
		for(i=daya_m;i<=12;i++)  //日期1的天數 
		{
			sumday+=month[i];     //月份日期相加 
		}
		for(i=0;i<dayb_m;i++)  //日期2的天數 
		{
			sumday+=month[i];     //月份日期相加 
		}
		sumday=sumday-daya_d+dayb_d;
		
		if(dayb_m>2)  //假如日期2的月份有碰到2月到3月的區間 
		{
			if(daya_y%4==0 && daya_y%100!=0 || daya_y%400==0)
			{
				sumday++;
			}
		}
		if(daya_m<3)  //假如日期1的月份有碰到2月到3月的區間 
		{
			if(dayb_y%4==0 && dayb_y%100!=0 || dayb_y%400==0)
			{
				sumday++;
			}
		}
		
		for(j=daya_y+1;j<dayb_y;j++)  //計算年距有閏年  
		{
			sumday+=365;
			if(j%4==0 && j%100!=0 || j%400 ==0)
			{
				sumday+=1;
			}
		}
	}
	
	printf("DAY=%d",sumday);
	return 0;
 } 
