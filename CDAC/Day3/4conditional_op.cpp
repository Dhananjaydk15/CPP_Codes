/*4. Write a C program to find the maximum of 2 numbers
using Conditional operator. */

#include <stdio.h>
int main()
{
    int fno, sno, ans; // fno : first no. , sno : second no.
    printf("\t---------To Find Greatest No.---------\n");
    printf("\t* Enter first no. :- ");
    scanf("%d", &fno); // fno
    printf("\t* Enter second no. :- ");
    scanf("%d", &sno); // sno
    printf("\t______________________________________\n");
    if (fno == sno)
    {
        printf("\t* Both are same.\n");
        printf("\t______________________________________\n");
        return 0;
    }
    // find greatest no. from fno and sno
    // using Ternary Operator/Conditional Operator.
    ans = fno > sno ? fno : sno;
    printf("\n\t* %d is greatest from %d and %d.", ans, fno, sno);
}