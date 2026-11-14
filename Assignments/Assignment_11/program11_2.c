#include<stdio.h>
#include<stdlib.h>

void RangeDisplay(int iStart,int iEnd)
{
    
    if(iStart < iEnd)
    {
        int iCnt = 0;
        for(iCnt = iStart;iCnt <= iEnd;iCnt++)
    {   
        if (iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }

        
    }
        
    }
    else if(iStart == iEnd)
    {
        if (iCnt % 2 == 0)
        {
           printf("%d",iStart);
        }
        
    }
    else if(iStart > iEnd)
    {
        
        printf("Invalid\n");
    }
    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter Ending:\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return EXIT_SUCCESS;
}
