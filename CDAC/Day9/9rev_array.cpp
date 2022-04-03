/* Write a C program to reverse an array without using another new array */
#include <stdio.h>
int main()
{
    int arr[100], len, i, j = 0, no,temp = 0;
    printf("\t* Enter The Lenght(upto 100) of array :- ");
    scanf("%d", &len);
    printf("\t* Enter Array Element :- \n");
    for (i = 0; i < len; i++) // scan element in array:
    {
        printf("\t\t");
        scanf("%d", &arr[i]);      // scan each element
    }                              // one by one:
    for ( i = len; i > 0 ; i--)
    {
        for ( j = 0; j < i-1 ; j++)//swap each element
        {                         //till i - 1:
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1] = temp;
            
        }
    }
    
    printf("\n\t* reversed array :- ");
    for (i = 0; i < len; i++)//reversed array:
    {
        printf("%d ",arr[i]);
    }

    return 0;
}