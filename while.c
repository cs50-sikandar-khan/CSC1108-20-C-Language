#include <stdio.h>


int main ()
{
    printf("Lecture 5 - While Loop\n");

    char value = 0;
    //scanf("%c",&value);
    //Boolean expression <= evaluate
    // != not equal
    // == equal to
    //

    //while (true) //
    //{
        //statement(s) - This will execute infinite times because
    //}

    //Evaluation is done "before" the first execution of the above statement(s)
    while (1 < 0) // Conditionally infinite
    {
        printf("W - Do you want to Exit? Press N to  Quit");
        //scanf("%c",&value);
    }

    //At least once the output is produced
    do
    {
        printf("DW - Do you want to Exit? Press N to  Quit");
        //scanf("%c",&value);
    }
    while (1 < 0); //Evaluation is done "after" the first execution of the above statement(s)
}