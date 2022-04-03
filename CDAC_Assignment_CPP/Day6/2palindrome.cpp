/*2. Write a program to find whether given number is palindrome or not.
Palindrome number is a number which is same as its reverse*/

#include <stdio.h>
int main()
{
    int no, rem, sum = 0, temp;
    printf("\t----------Palindrome No.---------\n");
    printf("\t* Enter the number :- ");
    scanf("%d", &no);
    temp = no;
    while (no > 0)
    {
        rem = no % 10;
        sum = (sum * 10) + rem;
        no = no / 10;
    }
    if (temp == sum)
        printf("\n\t* %d is palindrome number.", temp);
    else
        printf("\n\t* %d is not palindrome number.", temp);
    printf("\n\t_________________________________\n");
    return 0;
}