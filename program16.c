#include<stdio.h>

int MultFact(int iNo)
{
    int iMult=1,iCnt=0;

    if(iNo < 0)
    {
      iNo = -iNo;
    }
		for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
	   if((iNo%iCnt)==0)
	   iMult=(iMult*iCnt);
    }
	
   return iMult;
 }

 int main()
{
   int iValue=0,iRet=0;

   printf("Enter number\n");
   scanf("%d",&iValue);

  iRet=MultFact(iValue);
  printf("Multiplication of factors is : %d\n",iRet);

   return 0;
}