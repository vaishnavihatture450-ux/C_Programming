#include<stdio.h>
#include<stdlib.h>

void Display(int iValue)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iValue;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
