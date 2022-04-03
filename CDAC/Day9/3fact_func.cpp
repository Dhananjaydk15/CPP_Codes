/* Write a program and implement a factorial function.
 using below prototype declarations: */
long int factorial(long int);//function declaration:
#include <stdio.h>
int main()
{
    long int number;
    printf("\t-------------------Factorial-------------------");
    printf("\n\t* Enter The No. :- ");
    scanf("%ld", &number);
    printf("\n\t* Factorial of %ld is %ld\n", number, factorial(number));
    return 0;                                         //function call:
}
long int factorial(long int f)//fuction defination:
{
    int n=1,fact=1;
    while (n <= f)
    {
        fact = fact * n;
        n++;
    }
    return fact;
}
