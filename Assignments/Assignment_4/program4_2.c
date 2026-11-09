
#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

     CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}
