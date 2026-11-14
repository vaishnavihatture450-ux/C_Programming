#include<stdio.h>
#include<stdlib.h>

double SquareMeter(double dValue)
{
    double iSquareMeter = 0.0;

    iSquareMeter = dValue * 0.0929;

    return iSquareMeter;
   
}




int main()
{
   double dValue  = 0.0;
   double dRet = 0.0;


   printf("Enter area in Square feet:\n"); 
   scanf("%lf",&dValue);                            


    dRet = SquareMeter(dValue);

    printf("Area in Square Meter is: %f\n",dRet);

    return EXIT_SUCCESS;
}
