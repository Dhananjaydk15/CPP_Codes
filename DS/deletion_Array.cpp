#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include "data.h"
using namespace std;
void display(int arr[], int n);
void indDeletion(int arr[], int size,int index);

int main()
{
    int arr[100] = {1, 2, 5, 7, 22};
    int size = 5,index = 3;
    indDeletion(arr, size,index);
    display(arr, size-1);

    return 0;
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\n* Print " << i + i << " Element of Array : " << arr[i] << endl;
    };
}

void indDeletion(int arr[], int size,int index)
{

    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    };
}