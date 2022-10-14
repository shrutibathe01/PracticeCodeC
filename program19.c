#include<stdio.h>

int Count(int iNo)
{
	int count=0,iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		
		iDigit=iNo%10;
		if(iDigit<6)
		{
			count++;
	    }
        iNo=iNo/10;
		
	}
	return count;
}
int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter Number: ");
	scanf("%d",&iValue);
	
	iRet=Count(iValue);
	
	printf("%d",iRet);
	
	return 0;
}