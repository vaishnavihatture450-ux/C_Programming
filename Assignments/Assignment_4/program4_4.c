#include<stdio.h>
#include<stdlib.h>

void CheckVoitingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid\n");
    }
    else if (iAge >= 18)
    {
        printf("Eligible for Voting\n");

    }
    else
    {
        printf("Not Eligible for voiting\n");
    }

}

int main()
{   int iAge = 0;

    printf("Enter Age : \n");
    scanf("%d",&iAge);

    CheckVoitingEligibility(iAge);


    return EXIT_SUCCESS;
}
