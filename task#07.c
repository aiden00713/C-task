#include <stdio.h>
int main(void)
{
	int daya,dayb,sumday=0;
	int i,j,k;
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d",&daya,&dayb);
	int daya_y,daya_m,daya_d;
	int dayb_y,dayb_m,dayb_d;
	
	daya_y=daya/10000;        //�����1��"�~" 
	daya_m=(daya%10000)/100;  //�����1��"��" 
	daya_d=daya%100;          //�����1��"��" 
	
	dayb_y=dayb/10000;        // �����2��"�~" 
	dayb_m=(dayb%10000)/100;  // �����2��"��" 
	dayb_d=dayb%100;          // �����2��"��" 
	
/*	printf("%d %d %d\n",daya_y,daya_m,daya_d);
	printf("%d %d %d",dayb_y,dayb_m,dayb_d);
	���լO�_���Ȧ��\
*/
	if(daya_y==dayb_y) //���p�~���@�� 
	{
		if(daya_m==dayb_m) //���p����@��
		{
			sumday=dayb_d-daya_d;
		} 
		else  //������@�� 
		{
			for(i=daya_m;i<dayb_m;i++)
			{
				sumday+=month[i];     //�������ۥ[ 
			}
			sumday=sumday-daya_d+dayb_d;    //�`�Ѽƴ�h���1����[���2����� 
		}
		
		if(daya_m<=2 && dayb_m>2)  //���p������I��2���3�몺�϶� 
		{
			if(daya_y%4==0 && daya_y%100!=0 || daya_y%400==0)
			{
				sumday++;
			}
		}	
	}
	else if(daya_y>dayb_y)  //���]���1���~������j 
	{
		for(i=dayb_m;i<=12;i++)  //���2���Ѽ� 
		{
			sumday+=month[i];     //�������ۥ[ 
			//printf("���2���%d�ѼƬۥ[%d\n",i,sumday);
		}
		for(i=0;i<daya_m;i++)  //���1���Ѽ� 
		{
			sumday+=month[i];     //�������ۥ[ 
		}
		sumday=sumday-dayb_d+daya_d;
		
		if(daya_m>2)  //���p���1��������I��2���3�몺�϶� 
		{
			if(daya_y%4==0 && daya_y%100!=0 || daya_y%400==0)
			{
				sumday++;
			}
		}
		if(dayb_m<3)  //���p���2��������I��2���3�몺�϶� 
		{
			if(dayb_y%4==0 && dayb_y%100!=0 || dayb_y%400==0)
			{
				sumday++;
			}
		}

		for(j=dayb_y+1;j<daya_y;j++)  //�p��~�Z���|�~ 
		{
			sumday+=365;
			if(j%4==0 && j%100!=0 || j%400 ==0)
			{
				sumday+=1;
			}
		}
	}
	
	else   //���]���2���~������j
	{
		for(i=daya_m;i<=12;i++)  //���1���Ѽ� 
		{
			sumday+=month[i];     //�������ۥ[ 
		}
		for(i=0;i<dayb_m;i++)  //���2���Ѽ� 
		{
			sumday+=month[i];     //�������ۥ[ 
		}
		sumday=sumday-daya_d+dayb_d;
		
		if(dayb_m>2)  //���p���2��������I��2���3�몺�϶� 
		{
			if(daya_y%4==0 && daya_y%100!=0 || daya_y%400==0)
			{
				sumday++;
			}
		}
		if(daya_m<3)  //���p���1��������I��2���3�몺�϶� 
		{
			if(dayb_y%4==0 && dayb_y%100!=0 || dayb_y%400==0)
			{
				sumday++;
			}
		}
		
		for(j=daya_y+1;j<dayb_y;j++)  //�p��~�Z���|�~  
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
