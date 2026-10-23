#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1;i<=iNo;i++)
    {
if((iNo % i == 0) && (iNo % 2 == 0))
      {
    printf("%d",i);
      }
    }
}
int main()
{
 int iValue;
 printf("Enter number");
 scanf("%d",&iValue);
 DisplayFactor(iValue);
 return 0;

}
