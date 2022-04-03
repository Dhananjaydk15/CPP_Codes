/*Write a program to print all the locations
at which a particular element (taken as input) is found
in a array and also print the total number of times it occurs in the array.
The location starts from 1. */
#include <stdio.h>
int main()
{
    int arr[100], len, i, no;
    printf("\t* Enter The Lenght(upto 100) of array :- ");
    scanf("%d", &len);
    printf("\t* Enter Array Element :- \n");
    for (i = 0; i < len; i++) // scan element in array:
    {
        printf("\t\t");
        scanf("%d", &arr[i]); // scan each element
    }                         // one by one:
    printf("\n\t* Enter the number :- ");
    scanf("%d", &no);
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == no)
            printf("\t* %d is present at location %d.\n", no, i + 1);
    }
    printf("\t* %d is not present in the array.\n", no);
    return 0;
}