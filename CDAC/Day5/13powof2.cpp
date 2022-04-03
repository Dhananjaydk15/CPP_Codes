/* 13. Write a C program to check whether the given number(n) can be expressed as Power of Two (2) or not.
For example 8 can be expressed as 2^3. */

#include <stdio.h>
#include <math.h>
int main()
{
    int fno = 2, no, i = 1, temp;
    printf("\t* Enter The No. :- ");
    scanf("%d", &no);
    while (i != no)
    {
        temp = pow(2, i);
        if (temp == no)
        {
            printf("\t* %d is a number that can be expressed as power of 2.",no);
            return 0;
        }
        i++;
    }
    printf("\t* %d cannot be expressed as power of 2.",no);

    return 0;
}