#include <stdio.h>
int main(void)
{
	char a[80],b[80];
	char result[80];
	int sum=0,carry=0,sum2=0;
	scanf("%s%s",a,b);
	
	int i,j,k=0,end,end2;
	
	for(i=0;a[i]!=0;i++)  //�p��r��A������ 
	{
		;
	}
	for(j=0;b[j]!=0;j++)  //�p��r��B������ 
	{
		;
	}
	end=i-1;
	end2=j-1;
	while (end>= 0 || end2>= 0) 
	{
        if (end>= 0) 
		{
            sum = a[end] - '0';
        }
            
		if (end2>= 0) 
		{
            sum += b[end2] - '0';
        }
    
       // printf("sum=%d\n",sum); //���� 
        sum2=sum%10 + carry;
        
        if(sum2>9)
        {
        	sum2=sum2-10;
        	carry=2;
		}
		
		result[k++] = sum2+'0';
		//printf("Resuit=%c\n",result[k-1]);
		//printf("\n");
		
		if(carry==2)
		{
			carry = sum/10+1;
		}
		else
		{
			carry = sum/10;
		}
        
       // printf("carry=%d\n",carry);
        end--;
        end2--;
	}
	result[k]=0;
	printf("=");
	
	for(i=k-1;i>=0;i--)
	{
		printf("%c",result[i]);
	}
	
	return 0;
}
