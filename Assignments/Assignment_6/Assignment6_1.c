#include<stdio.h>
#include<stdlib.h>

void CalulateElectricityBill(int iUnits)
{
    float fbill = 0.0f;
    
    if(iUnits < 0)
    {
        printf("Invalid\n");
    }
    else if(iUnits <= 100)
    { 
       fbill =  iUnits * 5;
        printf("Consumed Units : %.2f\n",fbill);
    }
    else if(iUnits <= 200)
    {
        fbill = (100 * 5) + (iUnits - 100) * 7;
         printf("Consumed Units : %.2f\n",fbill);
    }
    else if(iUnits > 200)
    {
        fbill = (100 * 5) + (100 * 7) + (iUnits - 200) * 10;
        printf("Consumed Units : %.2f\n",fbill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter Consumned Units : \n");
    scanf("%d",&iUnits);

    CalulateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}
