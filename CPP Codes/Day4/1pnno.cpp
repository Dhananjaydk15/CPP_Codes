/*1. Write a C program to check if a given Number is zero or Positive or Negative Using if...else statement.
 */

#include <stdio.h>
int main()
{
    float no;
    printf("\t-----check given no is +ve or -ve-----\n");
    printf("\t* Enter the no. :- ");
    scanf("%f", &no);
    printf("\t______________________________________\n");
    if (no <= 0.0)
    {
        if (no < 0.0)
            printf("\t* %.2f is negative number.\n", no);
        else
            printf("\t* %.2f is equal to 0. \n", no);
    }
    else
        printf("\t* %.2f is Positive number.\n", no);
    printf("\t______________________________________\n");

    return 0;
}