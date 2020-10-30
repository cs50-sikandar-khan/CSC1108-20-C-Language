//Nested IF / Conditions
#include <stdio.h>

int main ()
{
    int Username = 0;
    int PIN = 0;

    printf("Please enter your Registration Number\n");
    scanf("%d",&Username);

    //Outer-condition
    if (Username == 2012111)
    {
        printf("Please enter your secret PIN\n");
        scanf("%d",&PIN);
        //Depends on the Above if condition - IF it is True then it will execute.
        //Inner-condition
        if (PIN == 1039)
        {
            printf("You have successfully logged in.\n");
        }
    }
}