#include<stdio.h>
#include<stdlib.h>

double RectArea(float fwidth, float fheight )
{
    float fRectArea = 0.0f;

    fRectArea = fwidth * fheight;

    return fRectArea;

}


int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width:\n");
    scanf("%f",&fValue1);

    
    printf("Enter Height:\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle is: %f\n",dRet);

    return EXIT_SUCCESS;
}
