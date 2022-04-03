/*Write a C program to search a given element from a 1D array
and display the position at which it is found by using linear search function.
The index location starts from 1.*/
#include <stdio.h>
int search(int arr[],int l,int n);
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
    printf("\t* Enter the number :- ");
    scanf("%d", &no);
    printf("\t* %d is present at location %d.\n",no,search(arr,len,no));
    return 0;
}
int search(int arr[],int l,int n)
{
    for (int i = 0; i < l; i++)
    {
        if(n==arr[i]) 
          return i+1;//element found at index i;
    }
       return -1;
}