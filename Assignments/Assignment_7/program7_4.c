#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNo)
{
        int iCnt ;
        for(iCnt = 1;iCnt <= iNo; iCnt++)
     {
      if(iCnt % 2 != 0)
        {
            printf( "%d\t",iCnt);
        }
    }
    

}

int main()
{
    int iValue;

    printf("Enter Number :");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}
