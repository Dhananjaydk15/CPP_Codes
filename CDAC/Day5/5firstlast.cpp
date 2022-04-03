/* 5. Write a C program to calculate the Sum of First and the Last Digit of a given Number.
For example if the number is 1234 the result is 1+4 = 5. */

#include <stdio.h>
int main()
{
    int no, i = 1, temp;
    printf("\t* Enter The No. :- ");
    scanf("%d", &no);
    temp = no;
    int last_no = no % 10;
    while (no > 10)
    {
        no = no / 10;
        i++;
    }
    int first_no = no;
    printf("\t* Addition of first and last digit of %d is %d.", temp, first_no + last_no);
    return 0;
}