#include<stdio.h>

int CountFour(int iNo)
{
	int count=0,iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		
		iDigit=iNo%10;
		if(iDigit==4)
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
	
	iRet=CountFour(iValue);
	
	printf("%d",iRet);
	
	return 0;
}