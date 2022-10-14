#include<stdio.h>
//incomplete
void FactRev(int iNo)
{
	int iCnt=0,iDigit=0,iRev=0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
		for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo%iCnt)==0)
		 printf("%d\t",iCnt);
	
	}
	
	
}

int main()
{
	int iValue=0;
	
	printf("Enter Number: ");
	scanf("%d",&iValue);
	
	FactRev(iValue);
	
	return 0;
}