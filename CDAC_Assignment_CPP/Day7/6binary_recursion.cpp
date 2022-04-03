/* Write a C Program to print Binary Equivalent of an Integer using Recursion. */
#include <stdio.h>
int binary(int num);
int main()
{
    int no;
    printf("* Enter The No.:- ");
    scanf("%d", &no);
    printf("* Binary Equivalent of %d is %d.", no, binary(no));
    return 0;
}
int binary(int num)
{
    if (num == 0)
        return 0;
    else
        return num % 2 + 10 * (binary(num / 2));
}