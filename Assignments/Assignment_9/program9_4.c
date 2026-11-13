#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

     
        for(iCnt = 1;iCnt <= iNo;iCnt = iCnt + 2 )
        {   
            iFact = iFact * iCnt;
       
        } 
    return iFact;
  
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    printf("Factorial is %d",iRet);

    return EXIT_SUCCESS;
}
