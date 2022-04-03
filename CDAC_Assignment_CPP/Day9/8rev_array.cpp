/* Write a C program to reverse an array by using another new array */
#include <stdio.h>
int main()
{
    int arr[100], len, i, j = 0, no, arr1[100];
    printf("\t* Enter The Lenght(upto 100) of array :- ");
    scanf("%d", &len);
    printf("\t* Enter Array Element :- \n");
    for (i = 0; i < len; i++) // scan element in array:
    {
        printf("\t\t");
        scanf("%d", &arr[i]);      // scan each element
    }                              // one by one:
    for (i = len-1; i >= 0; i--) // put last element of 1st array
    {                              // in first element of 2nd array:
        arr1[j++] = arr[i];
    }
    printf("\n\t* reversed array :- ");
    for (i = 0; i < len; i++)//reversed array:
    {
        printf("%d ",arr1[i]);
    }

    return 0;
}