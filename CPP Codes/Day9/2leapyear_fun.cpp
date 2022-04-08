/* Write a program and implement a function to find if it is leap year or not. */
#include <stdio.h>
int is_leap_year(int y); //function declaration:
int main()
{
    int year;
    printf("\t* Enter the year :- ");
    scanf("%d", &year);
    if (is_leap_year(year))//function call:
        printf("\t* %d is leap year.\n", year);
    else
        printf("\t* %d is not leap year.\n",year);
    return 0;
}
int is_leap_year(int y)//fuction defination:
{
    if ((y % 4 == 0) && (y % 400 == 0 || y % 100 != 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
