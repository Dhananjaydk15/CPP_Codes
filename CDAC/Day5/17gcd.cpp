/* Write a program to find the GCD (Greatest Common Divisor) of 2 (two) numbers using 'for' loop. */

#include <stdio.h>

int main()
{
    int fno, sno, i, gcd;
    printf("\t* Enter first no. :- ");
    scanf("%d", &fno); // fno : first no.
    printf("\t* Enter second no. :- ");
    scanf("%d", &sno); // sno : second no.
    for (i = 1; i <= fno && i <= sno; ++i)
    {
        if (fno % i == 0 && sno % i == 0)
            gcd = i; // GCD = Grattest Common Division.
    }
    printf("\t* GCD of two numbers %d and %d is %d.", fno, sno, gcd);
    return 0;
}
