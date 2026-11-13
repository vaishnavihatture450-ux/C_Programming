#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

     
        for(iCnt = 2;iCnt <= iNo;iCnt = iCnt + 2 )
        {   
            iFact = iFact * iCnt;
       
        } 
    return iFact;
  
}
int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

     
        for(iCnt = 1;iCnt <= iNo;iCnt = iCnt + 2 )
        {   
            iFact = iFact * iCnt;
       
        } 
    return iFact;
  
}
int Diffrence(int iNo)
{
    int Even = EvenFactorial(iNo);
    int Odd = OddFactorial(iNo);
    return  Even - Odd; 
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = Diffrence(iValue);
  

    printf("Diffrence is %d",iRet);

    return EXIT_SUCCESS;
}
