#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart,int iEnd)
{
    
    if(iStart < iEnd)
    {
        int iCnt = 0;
        for(iCnt = iEnd;iCnt >= iStart;iCnt--)
    {
        printf("%d\t",iCnt);
    }
        
    }
    else if(iStart == iEnd)
    {
        printf("%d",iStart);
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

    RangeDisplayRev(iValue1,iValue2);

    return EXIT_SUCCESS;
}
