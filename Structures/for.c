//Code: For-Loop in C, 21st October, 2020
//CSC1108 (Fall 2020)


#include<stdio.h>

int main (void)
{
    printf("\nLecture 4 - Programming II - Structures in C: Loops\n\n");
    int value=0;
    int Sum=0;

    //How many times = 'N' times = counter

    //For-Loop initialisation
    // Initial Value = 0 (array) | 1 | 2012001 | 100
    // Final Value = N-1 (array) | N | 2012450 | 90
    // Increment/Decrement = i++ / i-- = i=i+1

    for (int i=1; i <= 10; i++ )
    {
        scanf("%d",&value);
        Sum = Sum + value;



    }
    printf("The Sum is %d",Sum);
    printf("The Sum is %f",Sum/N);
    printf("Program End.");
}