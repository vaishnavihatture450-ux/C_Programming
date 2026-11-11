#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iSide1,int iSide2,int iSide3)
{
    if(iSide1 < 0 || iSide2 < 0 || iSide3 < 0)
    {
        printf("Invalid\n");
    }
    else if(iSide1 > iSide2 + iSide3)
    {   
        
        printf("Valid Triagnle\n");
    }
      else if(iSide2 > iSide1 + iSide3)
    {   
       
        printf("Valid Triagnle\n");
    }
      else if(iSide3 > iSide2 + iSide1)
    {   
       
        printf("Valid Triagnle\n");
    }
    else
    {
        printf("Not Valid Triagnle");
    }
}
  


int main()
{
    int iSide1 = 0;
    int iSide2 = 0;
    int iSide3 = 0;
    
    printf("Enter three Sides of Triangle :\n");
    scanf("%d %d %d", &iSide1,&iSide2,&iSide3);

    CheckTriangle(iSide1,iSide2,iSide3);

    return EXIT_SUCCESS;
}
