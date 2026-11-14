#include<stdio.h>
#include<stdlib.h>

float FhtoCs(float fFhar)
{
    float fTemp = 0.0;
    fTemp = (fFhar - 32) * (5.0 / 9.0);

    return fTemp;
}




int main()
{
   float fValue = 0.0;
   double dRet = 0.0;

   printf("Enter Temprature in Fahrenheit:\n"); 
   scanf("%f",& fValue);                            


    dRet = FhtoCs(fValue);

    printf("Temprature in Celcius is: %f\n",dRet);

    return EXIT_SUCCESS;
}
