//To use Decision Control Statement in our Program


#include <stdio.h>

//Main | entry of the program
int main (void )
{
    // \n - new line
    printf("\nLecture-4 - Programming II - Decision Structures.\n");

    printf("Select your Character (F/f for Female | m/M for Male ).");
    char Gender='a';
    //User input
    scanf("%c",&Gender);

    //Boolean expression | condition : Age == 21
    if(Gender == 'f') //  '==' to equate | '=' to assign
    {
        printf("You have select Female Game Character.\n");
    }
    else if (Gender == 'F')
    {
        printf("You have select Female Game Character.\n");
    }
    else if (Gender == 'm')
    {
        printf("You have select Male Game Character.\n");
    }
    else if (Gender == 'M')
    {
        printf("You have select Male Game Character.\n");
    }
    else
    {
        printf("You have select Invalid Game Character.\n");
    }
    printf("Program End...\n");
    //----------------------------------------------------------------

    //User
    switch (Gender)
    {
        case 'f':
            printf("You have select Female Game Character.\n");
            break;
        case 'F':
            printf("You have select Female Game Character.\n");
            break;
        case 'm':
            printf("You have select Male Game Character.\n");
            break;
        case 'M':
            printf("You have select Male Game Character.\n");
            break;
        default:
            printf("You have select Invalid Game Character.\n");
        break;

    }

}