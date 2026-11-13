#include<stdio.h>
#include<stdlib.h>

void Pattern(int iValue)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iValue;iCnt++)
    {
        printf("$ \t*\t");
    }
}

int main()
{
    int iValue;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}
