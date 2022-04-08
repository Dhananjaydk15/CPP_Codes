/* 1. Write a Program to find if a given number is Armstrong number.
Armstrong number has property:
153 = 13 + 53 + 33 */

#include <stdio.h>
int main()
{
    int no, rem, sum = 0, temp;
    printf("\t----------Armstrong No.---------\n");
    printf("\t* Enter the number :- ");
    scanf("%d", &no);
    temp = no;
    while (no > 0)
    {
        rem = no % 10;
        sum = sum + (rem * rem * rem);
        no = no / 10;
    }
    if (temp == sum)
        printf("\n\t* %d is armstrong number.", temp);
    else
        printf("\n\t* %d is not armstrong number.", temp);
    printf("\n\t________________________________\n");

    return 0;
}