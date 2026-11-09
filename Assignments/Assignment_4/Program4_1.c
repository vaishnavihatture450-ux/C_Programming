#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("Positive\n");
    }
    else if(iValue < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }
}

int main()
{

    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
