//Program-1: To calculate percentage Ob/To * 100 and saving it into a file.

//Directives and Libraries
#include <stdio.h>
#include <stdlib.h>

//Main Function
int main (void)
{
    //Percentage requires a decimal value. For that we will use floating point integer as compared to Integer in C

    //Declaration, it means that the variable will consumed later in the program.
    //A variable to store value of Total Marks
    float TotalMarks;

    float v = 12.0;

    //A variable to store value of Obtained Marks
    float ObtainedMarks;

    //Processing/Calculation

    //Initialize means assigning value | Assignment
    TotalMarks = 1000;
    //Initialize means assigning value | Assignment
    ObtainedMarks = 696;

    //float Value = ObtainedMarks/TotalMarks;
    //float Percentage = Value*100;

    float Percentage = (ObtainedMarks/TotalMarks) * 100;

    printf("The percentage is: %f",Percentage);

    //Initialize
    FILE *fPtr;

    //Opening the file
    fPtr = fopen("output.csv","w"); // w means open and apply write operation.

    //Writing data into File.
    fprintf(fPtr,"The percentage is, %f",Percentage);

    //Closing the file
    fclose(fPtr);

    printf("\nHappy Coding...");
}


