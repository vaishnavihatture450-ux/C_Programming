#include<stdio.h>
#include<stdlib.h>

void CheckMarks(float iMarks)
{
    if(iMarks < 0 || iMarks > 100)
    {
        printf("Invalid Marks :\n");
    }
    else if(iMarks >= 90 && iMarks <=100 )
    {
        printf("Grade A\n");
    }
     else if(iMarks >= 75 && iMarks <=89 )
    {
        printf("Grade B\n");
    }
     else if(iMarks >= 60 && iMarks <=74 )
    {
        printf("Grade C\n");
    }
     else if(iMarks >= 40 && iMarks <=59 )
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Fail\n");
    }
}

int main()
{
    float iMarks = 0.0f;

    printf("Enter Marks :\n");
    scanf("%f",&iMarks);

    CheckMarks(iMarks);
    return EXIT_SUCCESS;
}
