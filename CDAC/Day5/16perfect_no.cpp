/* 16. Write a C program to check whether a given number (n) is a perfect number or not? */

#include <stdio.h>

int main()
{
    int num, rem, sum = 0, i;
    printf("\t* Enter a number :- ");
    scanf("%d", &num);
    for (i = 1; i < num; i++)
    {
        rem = num % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
        printf("\t* %d is a Perfect Number.", num);
    else
        printf("\n\t* %d is not a Perfect Number.", num);
    return 0;
}