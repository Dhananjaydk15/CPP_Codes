#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
void display(int arr[], int n);
int indInsertion(int arr[], int size, int element, int capacity, int index);

int main()
{
    int arr[100] = {1, 2, 5, 7, 22};
    int size = 5, element = 45, index = 3;
    indInsertion(arr, size, element, 100, index);
    display(arr, size + 1);

    return 0;
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\n* Print " << i + i << " Element of Array : " << arr[i] << endl;
    };
}

int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    int temp = size;
    if (size >= capacity)
    {
        return -1;
    };
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    };
    arr[index] = element;
    return temp;
}