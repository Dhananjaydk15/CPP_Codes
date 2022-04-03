/*10. What is output of following program?*/
#include <stdio.h>
int main()
{
    int a = 1, b = -1, c = 0, d;
    d = ++a && ++b || c--;
    if (d)
        printf("Kolkata\n %d", d);
    else if (c)
        printf("Delhi %d\n", c);
    else
        printf("Bangalore\n");
    return 0;
}