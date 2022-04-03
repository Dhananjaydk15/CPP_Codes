/*7. What is output of following program?*/
#include <stdio.h>
int main()
{
    int a = 1, b = 2, c = 3;
    if (c > b > a)
        printf("true");
    else
        printf("false");
    return 0;
}