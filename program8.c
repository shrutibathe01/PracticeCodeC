#include<stdio.h>

void Display(int iNo,int iFrequency)
{
	int i=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
   
	for(i=1;i<=iFrequency;i++)
	{
		printf("%d\t",iNo);
	}
}

int main()
{
	int iValue=0;
	int iCount=0;
	
	printf("Enter Number: \n");
	scanf("%d",&iValue);
	
	printf("Enter frequency: \n");
	scanf("%d",&iCount);
	
	Display(iValue,iCount);
	
	return 0;
}