#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(int iYears, float fSalary)
{
    float fBonus = 0.0f;

    if(iYears <= 0)
    {
        printf("Invalid\n");
    }
    else if(iYears > 10)
    {
        fBonus = fSalary * 15 / 100;
        printf("Bonus = %.2f\n",fBonus);
    }
    else if(iYears > 5 && iYears <= 10)
    {
         fBonus = fSalary * 10 / 100;
          printf("Bonus = %.2f\n",fBonus);
    }
    else if(iYears < 5 )
    {
        fBonus = fSalary * 5 / 100;
          printf("Bonus = %.2f\n",fBonus);
    }
}

int main()
{
    int iYears = 0;
    float fSalary = 0.0f;

    printf("Enter years of Service and Salary :\n");
    scanf("%d %f",&iYears,&fSalary);

    CalculateBonus(iYears,fSalary);

    return EXIT_SUCCESS;
}
