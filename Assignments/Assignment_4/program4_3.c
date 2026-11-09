#include<stdio.h>
#include<stdlib.h>

void Checkgreater(int ifirst, int isecond)
{
    if(ifirst > isecond)
    {
        printf("%d is Greater\n", ifirst);
    }
    else if(isecond > ifirst)
    {
        printf("%d is Greater\n", isecond);
    }
    else
    {
        printf("Both numbers are Equal\n");
    }
}
int main()
{   
    int iValue1 = 0;
    int iValue2 = 0; 

    printf("Enter two Numbers : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Checkgreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}
