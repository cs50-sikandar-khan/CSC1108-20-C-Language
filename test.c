#include <stdio.h> //Directive


int main () //Entry point of Program
{
    //Taking input for Total marks
    float Totalmarks = 1000;
    //Taking input for Obtained marks
    float Obtainedmarks = 650;
    //Calculating Percentage
    float Result = (Obtainedmarks/Totalmarks) * 100;
    //Display the Marks
    printf("The percentage is: %f",Result );

}