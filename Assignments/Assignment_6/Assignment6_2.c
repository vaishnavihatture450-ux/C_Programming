#include<stdio.h>
#include<stdlib.h>

void CheckEligibility(int iAge, float iMarks)
{
    if(iAge && iMarks < 0)
    {
        printf("Invalid\n");
    }
    else if(iAge <= 18 && iMarks >= 60 )
    {
        printf("Eligible for Addmision\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

int main()
{
    int iAge = 0;
    float iMarks = 0.0f;

    printf("Enter Age and Marks : \n");
    scanf("%d %f",&iAge,&iMarks);

    CheckEligibility(iAge,iMarks);

    return EXIT_SUCCESS;
}
