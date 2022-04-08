/* Write a C Program to find Largest Element of an Integer Array. */
#include <stdio.h>
int main()
{
    int len, arr[100], i, j, temp;
    printf("\t* Enter The Lenght(upto 100) :- ");
    scanf("%d", &len);
    printf("\t* Enter Array Element :- \n");
    for (i = 0; i < len; i++)//scan element in array:
    {
        printf("\t\t\t");
        scanf("%d", &arr[i]);//scan each element
    }                       //one by one:
    printf("\t* largest element of array :- ");
    // for (j = 0; j < len; j++)
    // {
    //     for (int k = j + 1; k < len; k++)//this for() loop
    //     {                                //used to sort array:
    //         if (arr[j] > arr[k])  {
    //             temp = arr[j];
    //             arr[j] = arr[k];
    //             arr[k] = temp;
    //         }
    //     }
    // }
    for ( i = 0; i < len; i++)
    {
        if (arr[i]>arr[i+1])
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    printf("%d", arr[len - 2]);// print last (largest) 
    return 0;                  // element in sorted array:
}