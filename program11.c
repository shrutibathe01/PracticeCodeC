#include<stdio.h>
void PrintEven(int iNo)
{
	int iCnt=0,iNum=2;
	
	if(iNo<=0)
	{
		return;
	}
	while(iCnt!= iNo)
	{
		if((iNum%2)==0)
		{
			printf("%d ",iNum);
			
	     iCnt++;
		}
		iNum++;
	}		
}

int main()
{
	int iValue=0;
	
	printf("Enter Number: ");
	scanf("%d",&iValue);
	
	PrintEven(iValue);
	
	
	return 0;
}