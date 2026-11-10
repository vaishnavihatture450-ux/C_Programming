#include<stdio.h>
#include<stdlib.h>

void CHeckCharacterType(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase Alphabet\n");
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase Alphabet\n");
    }
    else if((cValue >= '0') && (cValue <= '9'))
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character");
    }
}

int main()
{

    char cValue = '\0';

    printf("Enter a character :");
    scanf("%c",&cValue);

    CHeckCharacterType(cValue);


    return EXIT_SUCCESS;
}
