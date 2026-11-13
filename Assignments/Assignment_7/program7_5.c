#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int iCnt;
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        
            printf("%d\t",iNo * iCnt);
        
    }

}

int main()
{
    int iValue;

    printf("Enter Number :");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}
