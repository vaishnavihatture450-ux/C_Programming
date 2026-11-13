#include<stdio.h>
#include<stdlib.h>

void RevTable(int iNo)
{
   int iCnt = 0;
   int iAns = 0;

    for(iCnt = 10;iCnt >= 1 ;iCnt--)
    {
       iAns = iNo * iCnt;
       printf("%d\t",iAns);
    }
    


}


int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

     RevTable(iValue);

  

    return EXIT_SUCCESS;
}

