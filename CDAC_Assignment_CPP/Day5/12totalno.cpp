/* 12. Write a C program to count total number of digits of an Integer number (n). */
#include <stdio.h>
int main()
{
    int no, temp, count = 1;
    printf("\t* Enter The No. :- ");
    scanf("%d", &no);
    temp = no;
    while (no > 10)
    {
        count = count + 1;
        no = no / 10;
    }
    printf("\t* Total Number of Digits of %d is %d", temp, count);
    return 0;
}