#include<stdio.h>
#include<stdlib.h>

int RangeEvenSum(int iStart,int iEnd)
{
    
    if(iStart < iEnd)
    {
         int iCnt = 0;
         int iSum = 0;
        for(iCnt = iStart;iCnt <= iEnd;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
             iSum = iSum + iCnt;
        }

        
    }
      return iSum;
        
    }
    else if(iStart == iEnd)
    {
        printf("%d\n",iStart);
    }
    else if(iStart > iEnd)
    {
        printf("Invalid\n");
    }
    else if(iStart < 0 || iEnd < 0)
    {
        printf("Invalid\n");
    }
   
   
    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
 

    printf("Enter Starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter Ending:\n");
    scanf("%d",&iValue2);

    
    iRet = RangeEvenSum(iValue1,iValue2);

    printf("Addition of Even Numbers:%d\n",iRet);

    return EXIT_SUCCESS;
}
