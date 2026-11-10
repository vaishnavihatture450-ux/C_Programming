#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 >= iNo2 && iNo1 >= iNo3)
    {
        printf("Greatest No is :%d \n",iNo1);
    }
    else if(iNo2 >= iNo1 && iNo2 >= iNo3)
    {
        printf("Greatest No is :%d \n",iNo2);
    }
    else
    {
        printf("Greatest No is :%d \n",iNo3);
    }
}




int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    printf("Enter 3 Numbers :\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    CheckDivisibility(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}
