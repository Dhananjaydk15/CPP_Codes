#include <stdio.h>
int main()
{
    long double n = 1, fact = 1, number;
    printf("\t-------------------Factorial-------------------");
    printf("\n\t* Enter The No. :- ");
    scanf("%Lf", &number);
    printf("\t_______________________________________________\n");
    while (n <= number)
    {
        fact = fact * n;
        n++;
    }
    printf("\n\tFactorial of %.3Lf is %E\n", number, fact);
    printf("\t_______________________________________________\n");

    return 0;
}