#include "data.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#include <iostream>

using namespace std;
class myArray
{
public:
    int total_size;
    int used_size;
    int *ptr;
    void myarray(myArray *a, int tsize, int usize)
    {
        a->total_size = tsize;
        a->used_size = usize;
        a->ptr = (int *)malloc(tsize * sizeof(int));
    };
    void setdata(myArray *a)
    {
        for (int i = 0; i < a->used_size; i++)
        {
            cout << "* Enter The Value of " << i + 1 << " :";
            cin >> (a->ptr)[i];
        };
    };
    void getdata(myArray *a)
    {
        for (int i = 0; i < a->used_size; i++)
        {
            cout << "\n* Print the Value of " << i + 1 << ":" << (a->ptr)[i];
        }
    };
};
int main()
{
    myArray marks;
    marks.myarray(&marks, 20, 10);
    marks.setdata(&marks);
    marks.getdata(&marks);
    return 0;
}