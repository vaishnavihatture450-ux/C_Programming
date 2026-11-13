#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{
   int iCnt = 0;
   int iAns = 0;
    for(iCnt = 1;iCnt <= 10 ;iCnt++)
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

     Table(iValue);

  

    return EXIT_SUCCESS;
}

