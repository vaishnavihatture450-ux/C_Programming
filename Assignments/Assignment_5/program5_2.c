#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear <= 0 )
    {
         printf("Invalid\n");
       
    }
    else if((iYear % 400 == 0) || (iYear % 4 == 0) && (iYear  % 100 != 0))
    {
        printf("%d is a Leap Year\n",iYear);
    }
    else
    {
        printf("%d is not a Leap Year",iYear);
    }
}

int main()
{
    int iYear = 0;

    printf("Enter Year\n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}
