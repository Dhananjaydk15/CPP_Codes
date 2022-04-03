#include <conio.h>
#include <stdlib.h>
#include <iostream>
# include "data.h"
using namespace std;

int linearsearch(int arr[], int size, int element); // Linear Search : O(n)
int binarysearch(int arr[], int size, int element); // Binary Search : O(log n) 
int main()
{
    int arr[] = {1, 2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(int);
    // int search = linearsearch(arr,size, 2);
    // cout<<"* Element "<<arr[search]<<" is index of "<<search<<endl;
    int search = binarysearch(arr, size, 10);
    cout << "* Element " << arr[search] << " is index of " << search << endl;
    return 0;
};

int linearsearch(int arr[], int size, int element) // Linear Search : Bast Case : O(1) and Worst Case : O(n) 
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binarysearch(int arr[], int size, int element) //Binary Search : O(log n)
{
    int low, high, mid;
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (element > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
