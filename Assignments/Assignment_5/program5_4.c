#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if((iValue % 3 == 0) && (iValue % 5  == 0) )
    {
        printf("Divisible by Both \n");
    }
    else if(iValue % 3 == 0)
    {
        printf("Diviible by 3 Only ");
    }
    else if(iValue % 5  == 0)
    {
        printf("Divisible by 5 Only ");
    }
    else
    {
        printf("Not Divisible by Either ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}
