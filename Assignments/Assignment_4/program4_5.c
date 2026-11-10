#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iNo)
{
    if(iNo % 5 == 0)
    {
        printf("Divislbe by 5 \n");
    }
    else
    {
        printf("Not Divisible\n");
    }
    

}

int main()
{   int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);


    return EXIT_SUCCESS;
}
