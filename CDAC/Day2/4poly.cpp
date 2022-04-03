
/*4. Write a program that asks the user to enter a value for x and then
 displays the value of the following polynomial: 6𝑥5+ 5𝑥^4−4𝑥^3+3𝑥^2+2𝑥+1  */

#include <stdio.h>
#include <math.h>
int main()
{
    int x, res;
    printf("----------- Value of Polynomial -----------\n");
    printf("* Enter The Value of x :- ");
    scanf("%d", &x);
    res = (6 * pow(x, 5)) + (5 * pow(x, 4)) -
          (4 * pow(x, 3)) + (3 * pow(x, 2)) + (2 * x) + 1;
    printf("-------------------------------------------\n");
    printf("* Value of Polynomial is %d\n", res);
    printf("-------------------------------------------\n");
    return 0;
}