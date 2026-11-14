#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int iCon = 0;
    iCon = iNo * 1000;

    return iCon;
}



int main()
{
   int iValue = 0;
   int iRet = 0;
   printf("Enter Distance:\n"); 
   scanf("%d",&iValue);


    iRet = KMtoMeter(iValue);

    printf("Distance in meter is: %d\n",iRet);

    return EXIT_SUCCESS;
}
